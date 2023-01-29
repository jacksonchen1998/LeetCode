class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> storage (m, vector<int> (n));
        for (int i = 0; i < m; i++)
            storage[i][0] = 1;
        for (int j = 0; j < n; j++)
            storage[0][j] = 1;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                storage[i][j] = storage[i - 1][j] + storage[i][j - 1];
            }
        }

        return storage[m - 1][n - 1];
    }
};