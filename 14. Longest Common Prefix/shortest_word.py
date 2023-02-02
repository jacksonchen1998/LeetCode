class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_len = min(len(length) for length in strs)
        res = ""
        for index in range(min_len):
            for word in range(len(strs) - 1):
                if strs[word][index] != strs[word+1][index]:
                    return res
            res += strs[0][index]
        return res
