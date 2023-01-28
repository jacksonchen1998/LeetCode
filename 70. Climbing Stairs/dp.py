class Solution:
    def climbStairs(self, n: int) -> int:
        ans = [0] * n
        if n == 1:
            return 1
        elif n == 2:
            return 2
        ans[0] = 1
        ans[1] = 2
        for i in range(2, n):
            ans[i] = ans[i - 1] + ans[i - 2]
        return ans[n - 1]
