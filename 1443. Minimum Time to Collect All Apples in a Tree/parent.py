class Solution:
    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:
        if True not in hasApple:
            return 0

        parents = [-1] * n

        for edge in edges:
            parent, child = edge

            if parents[child] == -1:
                parents[child] = parent
            else:
                parents[parent] = child

        for index in range(n - 1, 0, -1):
            if hasApple[index] and parents[index] != -1:
                hasApple[parents[index]] = 1

        return sum(hasApple[1:]) * 2
