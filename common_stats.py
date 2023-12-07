def stats(montecarlo, f=lambda x: x):
    n_nodes = 0
    n_gen_nodes = 0
    n_back_nodes = 0
    n_gen_leaves = 0
    n_back_leaves = 0
    queue = [montecarlo.root_node]
    while queue != []:
        node = queue.pop()
        n_nodes += 1
        is_back = node.parent is not None and f(node.state) == f(node.parent.state)
        is_leaf = node.children == []
        if is_back:
            n_back_nodes += 1
        else:
            n_gen_nodes += 1
        if is_leaf:
            if is_back:
                n_back_leaves += 1
            else:
                n_gen_leaves += 1
        queue += node.children

    print(f"""
STATS

number of nodes: {n_nodes}
number of gen nodes: {n_gen_nodes} (including leaves: {n_gen_leaves})
number of back nodes: {n_back_nodes} (including leaves: {n_back_leaves})

expansion count: {montecarlo.stats_expansion_count} (including failed: {montecarlo.stats_failed_expansion_count})
""")

    return (n_nodes, n_gen_nodes, n_back_nodes, n_gen_leaves, n_back_leaves)
        
    
