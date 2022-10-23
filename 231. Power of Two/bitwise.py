import numpy as np
class Solution:
    def isPowerOfTwo(self, n : int) -> bool:
        return ((np.int64(n) & -np.int64(n)) == np.int64(n)) and np.int64(n)
        
class Solution:
    def isPowerOfTwo(self, n : int) -> bool:
        if (n <= 0):
            return False
        return ((n - 1) & n) == 0 
        
class Solution:
    def isPowerOfTwo(self, n : int) -> bool:
        return n and not (n & n - 1)