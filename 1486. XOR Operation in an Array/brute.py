class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        answer = 0
        for i in range(0, n):
            answer = answer ^ (start + 2 * i)
        return answer

# For both Python2 and Python3