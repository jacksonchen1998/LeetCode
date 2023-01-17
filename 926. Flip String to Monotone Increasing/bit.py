class Solution:
    def minFlipsMonoIncr(self, s: str) -> int:
        res, one = 0, 0
        for i in s:
            if i == '1':
                one += 1
            elif one:
                one -= 1
                res += 1
        return res
# Same as Python 2