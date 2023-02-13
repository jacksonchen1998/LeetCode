class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x, res = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid * mid <= x) {
                res = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
};