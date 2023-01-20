class Solution:
    def findSubsequences(self, nums: List[int]) -> List[List[int]]:
     
        '''
        In Python 2.7, we need to change the following line to:
        
        global res
        
        res = set()
        '''
        res = set()

        def backtracking(index, subsequence):
            '''
            In Python 2.7, we need to change the following line to:

            global res
            '''
            nonlocal res

            if len(subsequence) > 1:
                res.add(tuple(subsequence))

            if index == len(nums):
                return

            if not subsequence or nums[index] >= subsequence[-1]:
                backtracking(index + 1, subsequence + [nums[index]])

            backtracking(index + 1, subsequence)

        backtracking(0, [])

        return res