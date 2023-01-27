class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();
        vector<vector<int>> mark(rows, vector<int>(cols, 0));
        int res = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mark[i][j] == 0 && grid[i][j] == '1') {
                    dfs(grid, i, j, mark);
                    res++;
                }
            }
        }
        return res;
    }
    
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& mark) {
        int rows = grid.size();
        int cols = grid[0].size();
        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] != '1') return;
        mark[i][j] = 1;
        if (i > 0 && mark[i-1][j] == 0) dfs(grid, i-1, j, mark);
        if (i < rows - 1 && mark[i+1][j] == 0) dfs(grid, i+1, j, mark);
        if (j > 0 && mark[i][j-1] == 0) dfs(grid, i, j-1, mark);
        if (j < cols - 1 && mark[i][j+1] == 0) dfs(grid, i, j+1, mark);
    }
};
