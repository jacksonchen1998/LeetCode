class Solution {
public:
    int jump(vector<int>& nums) {
        int l = nums.size();
        if (l == 1) return 0;

        int res = 0, cur_index = 0, prev_index = 0;

        for (int i = 0; i < l; i++) {
            if (i + nums[i] >= cur_index)
                cur_index = i + nums[i];
            if (i == prev_index) {
                res += 1;
                prev_index = cur_index;
                if (prev_index >= l - 1)
                    return res;
            }
        }
        return 0;
    }
};