class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        return self.recursive(left, right, target, nums)
    
    def recursive(self, left, right, target, nums):

        if left > right:
            return -1

        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            right = mid - 1
            return self.recursive(left, right, target, nums)
        elif nums[mid] < target:
            left = mid + 1
            return self.recursive(left, right, target, nums)
