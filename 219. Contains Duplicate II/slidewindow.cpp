class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (storage.count(nums[i])) return true;

            storage.insert(nums[i]);

            if (storage.size() > k) {
                storage.erase(nums[i-k]);
            }
        }
        return false;
    }
};