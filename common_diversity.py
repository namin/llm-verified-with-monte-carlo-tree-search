# DIVERSITY = True

from common_cache import select_with_scores
from cmdline import args

DIVERSITY = args.diversity

def limit(x):
    if DIVERSITY:
        return x[0:200]
    else:
        return x

import torch

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

def select_diversely_with_scores(texts, scores, score_predicate, features, montecarlo):
    def select(texts, indices):
        return select_diversely(texts, features[indices], montecarlo)
    return select_with_scores(texts, scores, score_predicate, select)
