class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int running_sum = 0, res = 0;
        vector<int> count (k, 0);
        count[0] = 1;
        for (auto num: nums) {
            running_sum += num;
            int mod = running_sum % k;
            if (mod < 0)
                mod += k;
            res += count[mod];
            count[mod] += 1;
        }
        return res;
    }
};