class Solution {
public:
    string addBinary(string a, string b) {
        int a_len = a.size(), b_len = b.size();
        int max_len = max(a_len, b_len);
        string res = "";
        int carry = 0;
        for (int i = 0; i < max_len; i++) {
            int a_bit = (i >= a_len) ? 0 : a[a_len - i - 1] - '0';
            int b_bit = (i >= b_len) ? 0 : b[b_len - i - 1] - '0';
            int sum = a_bit + b_bit + carry;
            res = char(sum % 2 + '0') + res;
            carry = sum / 2;
        }
        if (carry)
            res = '1' + res;
        return res;
    }
};