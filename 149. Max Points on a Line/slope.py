class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        def find_unique_line(point_1, point_2):
            if point_2[0] - point_1[0] == 0:
                return point_1[0]

            slope = (point_2[1] - point_1[1]) / (point_2[0] - point_1[0])
            bias = point_1[1] - point_1[0] * slope

            return (slope, bias)

        result = 0

        for i in range(len(points)):

            count = defaultdict(int)

            for j in range(i + 1, len(points)):

                count[find_unique_line(points[i], points[j])] += 1

            if count:
                result = max(result, max(count.values()))

        return result + 1