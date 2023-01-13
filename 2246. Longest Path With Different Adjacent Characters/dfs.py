class Solution:
    def longestPath(self, parent: List[int], s: str) -> int:

        tree = defaultdict(list)

        # build tre using parent, transfer index to end, value to start
        for end, start in enumerate(parent):
            # store each child with end
            tree[start].append(end)

        res = 1

        # if there only has one node
        if len(parent) == 1:
            return res

        def dfs(node):
            nonlocal res

            max1 = max2 = 0

            for neighbor in tree[node]:
                neighbor_val = dfs(neighbor)

                # only calculate when each alphabet isn't the same
                if s[neighbor] != s[node]:
                    if neighbor_val > max1:
                        max2 = max1
                        max1 = neighbor_val
                    elif neighbor_val > max2:
                        max2 = neighbor_val

            res = max(res, max1 + max2 + 1)

            return max1 + 1

        dfs(0)

        return res