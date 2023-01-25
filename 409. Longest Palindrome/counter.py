class Solution:
    def longestPalindrome(self, s: str) -> int:
        cnt = Counter(s)
        
        c, has_odd = 0, 0
        
        for val in cnt.values():
            if val % 2:
                has_odd = 1
                c += val - 1
            else:
                c += val
                
        return c + has_odd