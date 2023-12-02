import torch
import llm

from montecarlo.node import Node
from montecarlo.montecarlo import MonteCarlo

from lang import score_func, can_be_solution

from prompts import prompt, expansion_count, min_lines, check_func
from common import limit_depth, max_completion_depth

montecarlo = MonteCarlo(Node(prompt))
montecarlo.global_features = None

def add_features(features, montecarlo):
    assert len(features.shape) == 1
    reshape_features = features.unsqueeze(0).to(torch.float32)
    if montecarlo.global_features is None:
        montecarlo.global_features = reshape_features
    else:
        montecarlo.global_features = torch.cat(
            (montecarlo.global_features, reshape_features), dim=0
        )


def select_diversely(text, features, montecarlo):
    """
    Selects the text that is most different from the global features
    """
    assert len(features.shape) == 2
    if montecarlo.global_features is None:
        idx = 0
    else:
        all_distances = torch.zeros((len(features), len(montecarlo.global_features)))
        for i, feature in enumerate(features):
            for j, global_feature in enumerate(montecarlo.global_features):
                # TODO: using L2 distance here, maybe try cosine distance?
                all_distances[i][j] = torch.dist(feature, global_feature)

        dist_to_closest = torch.min(all_distances, dim=1)[0]  # dim: b
        idx = torch.argmax(dist_to_closest)

    add_features(features[idx], montecarlo)
    return text[idx]


def generate_complete(text, montecarlo, current_completion_depth=1):
    if current_completion_depth >= max_completion_depth:
        return None
    text, features = llm.generate(text, 3, return_hiddens=True)
    text = select_diversely(text, features, montecarlo)
    # TODO: try to select features after scoring instead? It's unclear exactly how to do this.

    score = score_func(text)
    if score is not None:
        if score < 0:
            return None
        else:
            if can_be_solution(text, min_lines, check_func):
                montecarlo.solution = text
            return text
    else:
        return generate_complete(text, montecarlo, current_completion_depth + 1)


def child_finder(node, montecarlo):
    if limit_depth(node):
        return

    text = generate_complete(node.state, montecarlo)
    if text is None:
        node.update_win_value(-1)
    else:
        child = Node(text)
        node.add_child(child)
        child.update_win_value(1)
        child.update_policy_value(1)

        child = Node(node.state)
        node.add_child(child)
        child.update_policy_value(0.2)


montecarlo.child_finder = child_finder

montecarlo.simulate(expansion_count)

print("CHOSEN SOLUTION")
print(montecarlo.solution)
