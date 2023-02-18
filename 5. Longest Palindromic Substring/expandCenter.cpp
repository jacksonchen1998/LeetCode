class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0) return "";
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); i++) {
            int len1 = expandCenter(s, i, i);
            int len2 = expandCenter(s, i, i + 1);
            int len = max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

    int expandCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left -= 1;
            right += 1;
        }
        return right - left - 1;
    }
};