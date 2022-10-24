class Solution:
  def countBits(self, n : int) -> List[int]:
    answer = [None] * (n + 1)
    for i in range(n + 1):
      answer[i] = bin(i).count("1")
    return answer
