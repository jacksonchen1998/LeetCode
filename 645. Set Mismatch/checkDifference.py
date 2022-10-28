class Solution:
  def findErrorNums(self, nums : List[int]) -> List[int]:
    Sum = sum(nums)
    allNum = (len(nums) + 1) * len(nums) // 2
    unique = sum(set(nums))
    return [Sum - unique, allNum - unique]
