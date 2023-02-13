class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> cap;
        int res = 0;
        int left = 0;
        cap[fruits[0]]++;

        if (fruits.size() == 1)
            return 1;

        for (int i = 1; i < fruits.size(); i++) {
            cap[fruits[i]]++;
            while (cap.size() > 2) {
                cap[fruits[left]]--;
                if (cap[fruits[left]] == 0) {
                    cap.erase(fruits[left]);
                }
                left++;
            }
            res = max(res, i - left + 1);
        }
        return res;
    }
};
