class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        cap = {}
        res = 0
        left = 0
        cap[fruits[0]] = 1

        if len(fruits) == 1:
            return 1

        for i in range(1, len(fruits)):
            cap[fruits[i]] = cap.get(fruits[i], 0) + 1
            while len(cap) > 2:
                cap[fruits[left]] -= 1
                if cap[fruits[left]] == 0:
                    cap.pop(fruits[left])
                left += 1
            res = max(res, i - left + 1)

        return res
