class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mp;
        while (n != 1) {

            if (mp[n] == 1)
                return false;
            else
                mp[n] = 1;
            
            int sum = 0;
            while (n != 0) {
                sum += pow(n % 10, 2);
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};