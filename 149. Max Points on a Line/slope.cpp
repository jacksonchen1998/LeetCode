class Solution {
public:
    int maxPoints(vector<vector<int>>& arr) {
        int sol = INT_MIN;

        for (int i = 0; i < arr.size(); i++){
            unordered_map<double, int> mp;
            int temp_sol = 0;

            for (int j = 0; j < arr.size(); j++){

                if (i == j)
                    continue;

                double y_dis = arr[j][1] - arr[i][1];
                double x_dis = arr[j][0] - arr[i][0];

                if (x_dis == 0){
                    mp[INT_MAX]++;

                    temp_sol = max(temp_sol, mp[INT_MAX]);

                    continue;
                }

                double slope = y_dis / x_dis;
                mp[slope]++;
                temp_sol = max(temp_sol, mp[slope]);
            }

            sol = max(sol, temp_sol + 1);
        }

        return sol;
    }
};