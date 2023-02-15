class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num; int k) {
        vector<int> res;
        int carry = k;
        for (int i = num.size() - 1; i >= 0; i--) {
            int sum = num[i] + carry;
            carry = sum / 10;
            res.push_back(sum % 10);
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};