class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        return self.encode(self.decode(num1) * self.decode(num2))
    
    def decode(self, num: str) -> int:
        res = 0
        for i in num:
            res = res * 10 + ord(i) - ord("0")
        return res

    def encode(self, num: int) -> str:
        txt = ""
        while num:
            alpha = num % 10
            num //= 10
            txt = chr(alpha + ord("0")) + txt
        return txt
