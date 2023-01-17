class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one = 0, res = 0;
        for (int index = 0; index < s.length(); index++){
            if (s[index] == '1')
                one += 1;
            else if (s[index] == '0' && one > 0) {
                one -= 1;
                res += 1;
            }
        }
        return res;
    }
};