class Solution:
  def isPowerOfFour(self, n : int) -> bool:
    return n > 0 and n % 3 == 1 and n & n - 1 == 0
  
class Solution:
  def isPowerOfFour(self, n : int) -> bool:
    return n > 0 and n & n - 1 == 0 and n & 0xaaaaaaaa == 0
  
class Solution:
  def isPowerOfFour(self, n : int) -> bool:
    return n > 0 and n & n - 1 == 0 and int(sqrt(n)) * int(sqrt(n)) == n
  
class Solution:
  def isPowerOfFour(self, n : int) -> bool:
    return n > 0 and log(n, 4).is_integer()
