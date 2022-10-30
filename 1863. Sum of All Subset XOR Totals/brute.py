class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        answer = 0
        for a in range(len(nums)):
            for num in combinations(nums, a + 1):
                temp = 0
                if len(num) == 0:
                    answer += 0
                if len(num) == 1:
                    answer += num[0]
                else:
                    for i in range(len(num)):
                        temp = temp ^ num[i]
                    answer += temp
        return answer