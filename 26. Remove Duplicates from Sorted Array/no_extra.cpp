class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i+1]) {
                nums[res] = nums[i+1];
                res += 1;
            }
        }
        return res;
    }
};