class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        bits = 0
        for a in nums:
            bits |= a
        return bits * int(pow(2, len(nums)-1))