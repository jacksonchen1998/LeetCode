class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        task = Counter(tasks)

        if 1 in task.values():
            return -1

        round = 0
        for num in task.values():
            round += (num // 3) + bool(num % 3)

        return round