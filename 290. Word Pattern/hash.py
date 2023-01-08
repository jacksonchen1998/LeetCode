class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dict = {}
        s = s.split()

        if len(pattern) != len(s):
            return False

        for (word, char) in zip (s, pattern):
            if word in dict:
                if dict[word] != char:
                    return False
            elif char in dict.values():
                return False
            else:
                dict[word] = char

        return True