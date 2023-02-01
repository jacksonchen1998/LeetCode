class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        if (str1 + str2 != str2 + str1):
            return ""
        elif str1 == str2:
            return str1
        else:
            length = gcd(len(str1), len(str2))
            return str1[:length]
# Python3 version

import fractions

class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        if str1 + str2 != str2 + str1:
            return ""
        return str1[:fractions.gcd(len(str1), len(str2))]
# Python2 version, we need to use fractions.gcd instead of math.gcd