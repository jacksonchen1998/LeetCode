class Solution:
    def bestTeamScore(self, scores: List[int], ages: List[int]) -> int:
        res = [0] * max(ages)
        score_age = sorted(zip(scores, ages))
        for score, age in score_age:
            res[age] = score + max(res[:age+1])
        return max(res)