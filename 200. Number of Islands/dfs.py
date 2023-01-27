class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        mark = [[0 for _ in range(len(grid[0]))] for _ in range(len(grid))]
        res = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if mark[i][j] == 0 and grid[i][j] == '1':
                    self.dfs(grid, i, j, mark)
                    res += 1
        return res
        
    def dfs(self, grid, i, j, mark):
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] == '0':
            return
        mark[i][j] = 1
        if i > 0 and mark[i - 1][j] == 0:
            self.dfs(grid, i - 1, j, mark)
        if i < len(grid) - 1 and mark[i + 1][j] == 0:
            self.dfs(grid, i + 1, j, mark)
        if j > 0 and mark[i][j - 1] == 0:
            self.dfs(grid, i, j - 1, mark)
        if j < len(grid[0]) - 1 and mark[i][j + 1] == 0:
            self.dfs(grid, i, j + 1, mark)