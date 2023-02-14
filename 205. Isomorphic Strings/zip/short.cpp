class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mp;
        unordered_map<char, char> back_mp;

        for (int i = 0; i < s.size(); i++) {
            if ((mp.count(s[i]) && mp[s[i]] != t[i]) || (back_mp.count(t[i]) && back_mp[t[i]] != s[i]))
                return false;
            mp[s[i]] = t[i];
            back_mp[t[i]] = s[i];
        }
        return true;
    }
};