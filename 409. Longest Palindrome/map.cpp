class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        
        for (auto c: s) {
            mp[c]++;
        }
        
        int has_odd = 0, res = 0;
        
        for (auto pair: mp) {
            if (pair.second % 2 == 1) {
                has_odd = 1;
                res += pair.second - 1;
            } else {
                res += pair.second;
            }
        }
        
        return res + has_odd;
    }
};