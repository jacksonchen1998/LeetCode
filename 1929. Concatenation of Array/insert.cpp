class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2 = nums;
        nums.insert( nums.end(), nums2.begin(), nums2.end() );
        return nums;
    }
};