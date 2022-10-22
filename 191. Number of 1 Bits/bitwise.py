class Solution:
  def hammingweight (self, n : int) -> int:
    return bin(n).count("1")
  
class Solution:
  def hammingweight (self, n : int) -> int:
    count = 0
    while n:
      count += &1
      n >>= 1
    return count
