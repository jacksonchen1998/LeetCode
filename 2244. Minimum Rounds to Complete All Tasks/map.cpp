class Solution{
public:
    int minimumRounds(vector<int>& tasks){
        unordered_map<int, int> cnt;
        for (int i: tasks)
            cnt[i]++;

        int round = 0;
        for (auto &it: cnt){
            if (it.second == 0) return -1;
            round += (it.second + 2) / 3;
        }
        return round;
    }
};