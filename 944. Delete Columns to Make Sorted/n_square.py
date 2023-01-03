class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        del_cols = 0
        for col in range(len(strs[0])):
            for row in range(len(strs) - 1):
                if strs[row + 1][col] < strs[row][col]:
                    del_cols += 1
                    break
        return del_cols