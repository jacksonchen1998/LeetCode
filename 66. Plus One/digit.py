class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = 0
        for i in range(len(digits)):
            num += digits[i] * 10**(len(digits)-i-1)
        num += 1

        def get_digit(number, i):
            return number // 10**i % 10
        res = []

        for i in range(len(str(num)) - 1, -1, -1):
            res.append(get_digit(num, i))

        return res