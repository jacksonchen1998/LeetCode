class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res (nums.size() * 2, 0);
        for (int i = 0; i < nums.size(); i++) {
            res[i + nums.size()] = nums[i];
            res[i] = nums[i];
        }
        return res;
    }
};