class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        sol_index = 0
        total = 0
        car = 0

        for index in range(len(gas)):
            car += gas[index] - cost[index]
            total += gas[index] - cost[index]

            if car < 0:
                car = 0
                sol_index = index + 1

        if total >= 0:
            return sol_index
        else:
            return -1