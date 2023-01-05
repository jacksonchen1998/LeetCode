class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort()
        result = 1
        curStart = points[-1][0]

        for start, end in reversed(points):
            if end < curStart:
                curStart = start
                result += 1

        return result