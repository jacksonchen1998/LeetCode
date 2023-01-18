class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curS = nums[0], minS = nums[0], maxS = nums[0], sum = nums[0];

        for (int i = 1; i < nums.size(); i++){
            curS = max(curS + nums[i], nums[i]);
            maxS = max(maxS, curS);
        }

        curS = nums[0];

        for (int i = 1; i < nums.size(); i++){
            curS = min(curS + nums[i], nums[i]);
            minS = min(minS, curS);
            sum += nums[i];
        }

        int cirS = sum - minS;

        if (cirS == 0)
            return maxS;

        return max(maxS, cirS);
        
    }
};