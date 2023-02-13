class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bits = 0;
        for (auto num: nums)
            bits |= num;
        return bits * int(pow(2, nums.size()-1));
    }
};