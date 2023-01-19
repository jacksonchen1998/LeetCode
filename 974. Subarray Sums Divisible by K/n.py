class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        res, running_sum = 0, 0
        count = [0] * k
        count[0] = 1
        for num in nums:
            running_sum += num
            mod = running_sum % k
            if mod < 0:
                mod += k
            res += count[mod]
            count[mod] += 1
        return res