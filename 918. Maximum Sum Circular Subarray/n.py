class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        n = len(nums)
        curS = nums[0]
        maxS = nums[0]
        for index in range(1, n):
            curS = max(nums[index], nums[index] + curS)
            maxS = max(curS, maxS)
        
        curS = nums[0]
        minS = nums[0]

        for index in range(1, n):
            curS = min(nums[index], nums[index] + curS)
            minS = min(curS, minS)

        cirS = sum(nums) - minS
        if cirS == 0:
            return maxS
        return max(maxS, cirS)
        
