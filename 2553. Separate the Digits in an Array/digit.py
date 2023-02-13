class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        res = []
        
        def get_digit(number, n):
            return number // 10**n % 10
        
        for i in range(len(nums)):
            for j in range(len(str(nums[i]))):
                res.append(get_digit(nums[i], len(str(nums[i]))-j-1))
            
        return res
