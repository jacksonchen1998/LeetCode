class Solution:
  def hasAlternatingBits(self, n : int) -> bool:
    num = (n >> 2) ^ n
    return (num & -num) == num
    
class Solution:
  def hasAlternatingBits(self, n : int) -> bool:
    num = (n >> 1) ^ n
    return (num + 1 & n) == 0
