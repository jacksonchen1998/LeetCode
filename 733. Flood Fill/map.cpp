class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original = image[sr][sc];
        dfs(image, sr, sc, original, color);
        return image;
    }

    void dfs(vector<vector<int>>& img, int i, int j, int original, int update) {
        if (i < 0 || i >= img.size() || j < 0 || j >= img[0].size() || original != img[i][j] || img[i][j] == update) {
            return;
        }
        img[i][j] = update;
        dfs(img, i , j + 1, original, update);
        dfs(img, i , j - 1, original, update);
        dfs(img, i - 1, j, original, update);
        dfs(img, i + 1, j, original, update);
    }
};