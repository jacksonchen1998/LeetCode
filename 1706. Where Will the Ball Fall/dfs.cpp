class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> res;
        int row = grid.size(), col = grid[0].size();
        for (int i = 0; i < col; i++)
            res.push_back(dfs(grid, 0, i, row, col));
        return res;
    }

    int dfs(vector<vector<int>>& grid, int r, int c, int row, int col) {
        if (r == row)
            return c;
        else if (grid[r][c] == 1 && c+1 < col && grid[r][c+1] == 1)
            return dfs(grid, r+1, c+1, row, col);
        else if (grid[r][c] == -1 && c-1 >= 0 && grid[r][c-1] == -1)
            return dfs(grid, r+1, c-1, row, col);
        else
            return -1;
    }
};