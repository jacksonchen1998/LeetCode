class Solution:
    def reverse(self, x: int) -> int:

        res = ""

        if x >= 0:
            slen = len(str(x))
            for i in range(slen):
                res += str(self.get_digit(x, i))
            if int(res) > 2**31 - 1 or int(res) < -2**31:
                return 0
            else:
                return int(res)
        else:
            slen = len(str(abs(x)))
            for i in range(slen):
                res += str(self.get_digit(abs(x), i))
            if -int(res) > 2**31 - 1 or -int(res) < -2**31:
                return 0
            else:
                return -int(res)

    def get_digit(self, number, n):
        return number // 10**n % 10