class Solution:
    def findAnagrams(self, s: str, p: str):
        n, l = len(s), len(p)
        res = []
        vs, vp = [0] * 26, [0] * 26
        
        for c in p:
            vp[ord(c) - ord('a')] += 1
            
        for i in range(n):
            if i >= l:
                vs[ord(s[i - l]) - ord('a')] -= 1
            vs[ord(s[i]) - ord('a')] += 1
            if (vs == vp):
                res.append(i + 1 - l)
        return res