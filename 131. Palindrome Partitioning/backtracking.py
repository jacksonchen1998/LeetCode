class Solution:
    def partition(self, s: str) -> List[List[str]]:
        def is_pali(s):
            return s == s[::-1]
        
        def backtracking(s, res, strings, index):
            if index == len(s):
                res.append(list(strings))
            
            for i in range(index, len(s)):
                string = s[index:i+1]
                if not is_pali(string):
                    continue
                strings.append(string)
                backtracking(s, res, strings, i + 1)
                strings.pop()
                
        res = []
        strings = []
        backtracking(s, res, strings, 0)
        return res