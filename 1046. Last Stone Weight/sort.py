class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones.sort(reverse=True)
            extra_stone = stones[0] - stones[1]
            del stones[:2]
            stones.append(extra_stone)
        if len(stones) == 1:
            return stones[0]
        else:
            return 0