class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = 0
        for customer in accounts:
            temp = sum(customer)
            res = max(res, temp)

        return res