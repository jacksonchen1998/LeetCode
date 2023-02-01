class Solution {
public:
    int MOD = pow(10, 9) + 7;
    int exp(int a, int b) {
        int res = 1;
        while (b) {
            if (b & 1) // b % 2 == 1, if b is odd, multiply a
                res = (res * 1LL * a) % MOD; // res = (res * a) % MOD;
            a = (a * 1LL * a) % MOD; // a = (a * a) % MOD, since a is even, multiply a by itself
            b >>= 1; // b /= 2;
        }
        return res; 
        // return a^b, a^b = a^(b/2) * a^(b/2) * a^(b%2), b%2 is 0 or 1
    }

    int monkeyMove(int n) {
        return (exp(2, n) - 2 + MOD) % MOD;
    }
};