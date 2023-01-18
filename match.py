class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if not s:
            return True
        match = 0
        for c in t:
            if s[match] == c:
                match += 1
            if len(s) == match:
                return True
        return False