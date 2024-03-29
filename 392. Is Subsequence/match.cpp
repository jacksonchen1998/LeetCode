class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0)
            return true;
        int match = 0;
        for (int i = 0; i < t.length(); i++) {
            if (s[match] == t[i])
                match += 1;
            if (match == s.length())
                return true;
        }

        return false;
    }
};