class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target > nums[nums.size()-1]) return nums.size();
        else if (target < nums[0]) return 0;
        return BinarySearch(nums, 0, nums.size() - 1, target);
    }

    int BinarySearch(vector<int>& nums, int low, int high, int target) {
        int res = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res == -1 ? low : res;
    }
};