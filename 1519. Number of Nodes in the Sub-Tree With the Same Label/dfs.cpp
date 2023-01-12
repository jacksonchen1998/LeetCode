class Solution {
    vector<int> arr;
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        arr.resize(n);

        vector<vector<int>> adj(n);
        for (auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        dfs(-1, 0, adj, labels);

        return arr;

    }
private:
    vector<int> dfs(int parent, int child, vector<vector<int>>& edges, string& labels) {
        vector<int> res(26);
        for (auto edge:edges[child]) {
            if (parent != edge) {
                vector<int> count = dfs(child, edge, edges, labels);

                for (int alph = 0; alph < 26; alph++)
                    res[alph] += count[alph];
            }
        }

        arr[child] = ++res[labels[child] - 'a'];
        return res;
    }
};