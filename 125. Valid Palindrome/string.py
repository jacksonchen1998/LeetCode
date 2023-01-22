class Solution:
    def isPalindrome(self, s: str) -> bool:
        index = 0
        s = s.translate(str.maketrans('', '', string.punctuation))
        s = s.lower()
        s = s.replace(" ", "")
        mid = len(s) // 2

        while mid:
            if s[0 + index] == s[len(s) - 1 - index]:
                mid -= 1
                index += 1
            else:
                return False
        return True