# Python 3

class Solution:
  def findComplement(self, num : int) -> int:
    self.x = num
    num |= num >> 1
    num |= num >> 2
    num |= num >> 4
    num |= num >> 8
    num |= num >> 16
    return self.x ^ num

# Python 2

class Solution(object):
  def findComplement(self, num):
    """
    :type num: int
    :rtype: int
    """
    self.x = num
    num |= num >> 1
    num |= num >> 2
    num |= num >> 4
    num |= num >> 8
    num |= num >> 16
    return self.x ^ num
