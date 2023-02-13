class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; // 0-8 + 1 = 1-9
                return digits; // 0-8 + 1 = 1-9
            }
            digits[i] = 0; // 9 + 1 = 0
        }
        digits[0] = 1; // 9 + 1 = 0
        digits.push_back(0); // 9 + 1 = 0
        return digits;
    }
};

// The solution is based on the following observation:
// 1. If the last digit is not 9, then we can simply add 1 to the last digit and return the result.
// 2. If the last digit is 9, then we need to set it to 0 and propagate the carry to the left.
// 3. If the first digit is 0, then we need to add a new digit 1 to the beginning of the array.