class Solution:
    def jump(self, nums: List[int]) -> int:
        res, l, index = 0, len(nums), 0
        storage = [0] * l

        if l == 1:
            return 0

        storage[0] = nums[0]

        for i in range(l):
            storage[i] = max(storage[i-1], nums[i]+i)

        while index < l - 1:
            index = storage[index]
            res += 1
        return res
