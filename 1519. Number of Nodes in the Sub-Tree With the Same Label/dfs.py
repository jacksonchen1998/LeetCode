class Solution:
    def countSubTrees(self, n: int, edges: List[List[int]], labels: str) -> List[int]:

        # build graph based on edges (adjacency list represntation)
        graph = defaultdict(list)

        for parent, child in edges:
            graph[parent].append(child)
            graph[child].append(parent)

        res = [0] * n

        def dfs(node, parent):

            count = Counter()

            nonlocal res

            for neighbor in graph[node]:
                if parent != neighbor:
                    # continue count descendant
                    count += dfs(neighbor, node)

            # if neighbor's alphabet equal to parent's alphabet
            count[labels[node]] += 1
            # accumulate the number of count
            res[node] = count[labels[node]]
            # return the collection for calculating the number of count
            return count
            
        # first traversal the root by a non-exist node called "-1" 
        dfs(0, -1)
        return res
        