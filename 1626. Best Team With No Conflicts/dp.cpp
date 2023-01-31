class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = ages.size();
        int dp[n], res = 0;
        vector<pair<int, int>> history;
        for (int i = 0; i < n; i++) {
            history.push_back({ages[i], scores[i]});
        }
        sort(history.begin(), history.end());
        for (int i = 0; i < n; i++) {
            dp[i] = history[i].second;
            for (int j = 0; j < i; j++) {
                if (history[j].second <= history[i].second) {
                    dp[i] = max(dp[i], dp[j] + history[i].second);
                }
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};