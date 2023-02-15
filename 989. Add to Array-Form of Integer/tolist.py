class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s = ""
        for i in num:
            s += str(i)
        total = int(s) + k
        return [int(i) for i in str(total)]