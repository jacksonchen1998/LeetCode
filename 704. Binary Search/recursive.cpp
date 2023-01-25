class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0, right = nums.size() - 1;
        return recursive(nums, target, left, right);
        
    }

    int recursive(vector<int>& nums, int target, int left, int right) {
        if (left > right)
            return -1;

        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            right = mid - 1;
            return recursive(nums, target, left, right);
        } else {
            left = mid + 1;
            return recursive(nums, target, left, right);
        }
    }
};