class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        res = []

        for i in range(n):
            val = i + 1

            if ((val % 3 == 0) and (val % 5 == 0)):
                res.append("FizzBuzz")
            elif val % 3 == 0:
                res.append("Fizz")
            elif val % 5 == 0:
                res.append("Buzz")
            else:
                res.append(str(val))

        return res
