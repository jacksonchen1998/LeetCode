class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        # only has index 1
        if len(trust) == 0 and n == 1:
            return 1
            
        count = [0] * (n + 1)
        
        for index in trust:
            count[index[0]] -= 1 # decrease the indegree
            count[index[1]] += 1 # increase the outdegree
            
        for index in range(len(count)):
            if count[index] == n - 1:
                retrun index
                
        return -1