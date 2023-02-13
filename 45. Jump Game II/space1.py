class Solution:
    def jump(self, nums: List[int]) -> int:
        l, cur_index, prev_index, res = len(nums), 0, 0, 0
        if l == 1:
            return 0

        for i in range(l):
            if cur_index < i + nums[i]:
                cur_index = i + nums[i]
            if prev_index == i:
                res += 1
                prev_index = cur_index
                if prev_index >= l - 1:
                    return res