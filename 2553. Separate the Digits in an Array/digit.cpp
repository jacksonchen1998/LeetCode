#include <cmath>
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < to_string(nums[i]).size(); j++) {
                res.push_back(fmod(nums[i] / pow(10, to_string(nums[i]).size() - j - 1), 10));
            }
        }
        return res;
    }
};