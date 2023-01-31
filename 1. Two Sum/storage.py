class Solution:
  def twoSum(self, nums: List[int], target : int) -> List[int]:
    arr = {}
    for index, value in enumerate(nums):
      if target - value in arr:
        return arr[target - value], index
      else:
        arr[value] = index
