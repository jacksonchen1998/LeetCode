class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        elif n == 1 or n == 2:
            return 1
        res = [0] * (4)
        res[0] = 0
        res[1] = 1
        res[2] = 1
        for i in range(3, n + 1):
            res[3] = res[2] + res[1] + res[0]
            res[0] = res[1]
            res[1] = res[2]
            res[2] = res[3]
        return res[3]