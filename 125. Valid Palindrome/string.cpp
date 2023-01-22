class Solution {
public:
    char asciitolower(char in) {
        if (in <= 'Z' && in >= 'A')
            return in - ('Z' - 'z');
        return in;
    }

    bool isPalindrome(string s) {
        int index = 0;
        auto it = std::remove_if(s.begin(), s.end(), ::ispunct);
        s.erase(it, s.end());

        for (int i = 0; i < s.size(); i++)
        s[i] = asciitolower(s[i]);
        
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());

        int mid = s.size() / 2;

        while (mid > 0){
            if (s[0 + index] == s[s.size() - 1 - index]) {
                mid -= 1;
                index += 1;
            } else {
                return false;
            }
        }
        return true;
    }
};