class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple){
        if (find(hasApple.begin(), hasApple.end(), true) == hasApple.end())
            return 0;

        vector<int> parents(n, -1);

        for (int i = 0; i < edges.size(); i++){
            int parent = edges[i][0];
            int child = edges[i][1];

            if (parents[child] == -1)
                parents[child] = parent;
            else
                parents[parent] = child;

        }

        for (int i = n - 1; i > 0; i--) {
            if ((hasApple[i] == true) && (parents[i] != -1))
                hasApple[parents[i]] = 1;
        }

        int res = 0;

        for (int i = 1; i < n; i++)
            res += hasApple[i];

        return res * 2;
    }
};