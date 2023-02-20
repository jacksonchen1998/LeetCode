class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target > nums[len(nums)-1]:
            return len(nums)
        elif target < nums[0]:
            return 0
        return self.BinarySearch(nums, 0, len(nums)-1, target)

    def BinarySearch(self, nums, low, high, target):
        res = -1
        while low <= high:
            mid = low + (high - low) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                res = mid
                high = mid - 1
            else:
                low = mid + 1
        if res == -1:
            return low
        else:
            return res