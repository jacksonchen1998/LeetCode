class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, sum = 0, index = 0;

        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];   
        }

        if (total - nums[0] == 0)
            return 0;

        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i - 1];
            if (sum == (total - sum - nums[i])) {
                return i;
            }
        }
        return -1;
    }
};