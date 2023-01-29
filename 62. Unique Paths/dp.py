class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        storage = [[0] * n] * m
        for i in range(n):
            storage[0][i] = 1
        for i in range(m):
            storage[i][0] = 1
        for i in range(1, m):
            for j in range(1, n):
                storage[i][j] = storage[i - 1][j] + storage[i][j - 1]
        return storage[m - 1][n - 1]
