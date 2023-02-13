class Solution:
    def mySqrt(self, x: int) -> int:
        low, high, res = 0, x, 0
        while low <= high:
            mid = (low + high) // 2
            if mid * mid <= x:
                res = mid
                low = mid + 1
            else:
                high = mid - 1
        return res