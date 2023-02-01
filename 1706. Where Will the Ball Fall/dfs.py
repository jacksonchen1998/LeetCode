class Solution:
    def findBall(self, grid: List[List[int]]) -> List[int]:
        row, col, res = len(grid), len(grid[0]), []
        for c in range(col):
            res.append(self.dfs(grid, 0, c, row, col))
        return res
    
    def dfs(self, grid, r, c, row, col):
        if r == row:
            return c
        elif grid[r][c] == 1 and c+1 < col and grid[r][c+1] == 1:
            return self.dfs(grid, r+1, c+1, row, col)
        elif grid[r][c] == -1 and c-1 >= 0 and grid[r][c-1] == -1:
            return self.dfs(grid, r+1, c-1, row, col)
        else:
            return -1