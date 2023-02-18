class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s) == 0:
            return ""
        start, end = 0, 0
        for i in range(len(s)):
            len1 = len(self.expandCenter(s, i, i))
            len2 = len(self.expandCenter(s, i, i + 1))
            length = max(len1, len2)
            if length > end - start:
                start = i - (length - 1) // 2
                end = i + length // 2
        return s[start:end + 1]
    
    def expandCenter(self, s, left, right):
        while left >= 0 and right < len(s) and s[left] == s[right]:
            left -= 1
            right += 1
        return s[left + 1:right]