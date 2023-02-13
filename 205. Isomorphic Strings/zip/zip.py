class Solution:
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False

        d1, d2 = dict(), dict()
        
        for v, w in zip(s,t):
            if (v in d1 and d1[v] != w) or (w in d2 and d2[w] != v):
                    return False
            d1[v], d2[w] = w, v
        return True
                