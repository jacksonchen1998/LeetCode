class Solution:
    def firstBadVersion(self, n: int) -> int:
        left, right = 1, n
        res = 1
        while left <= right:
            mid = (left + right) // 2
            if isBadVersion(mid):
                res = mid
                right = mid - 1
            else:
                left = mid + 1
        return res