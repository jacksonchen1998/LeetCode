class Solution:
    def minPartitions(self, n: str) -> int:
        for i in ['9','8','7','6','5','4','3','2','1','0']:
            if i in n:
                return int(i)