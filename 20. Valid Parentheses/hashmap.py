class Solution:
    def isValid(self, s : str) -> bool:
        stack, hashmap = [], {'(': ')', '{': '}', '[': ']'}
        for symbol in s:
            if symbol in hashmap:
                stack.append(symbol)
            else:
                if not stack or hashmap[stack[-1]] != symbol:
                    return False
                stack.pop()
        return not stack