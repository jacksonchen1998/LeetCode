class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> back_mp;
        for (int i = 0; i < s.size(); i++) {
            if (!mp.count(s[i])) {
                mp[s[i]] = t[i];
            } else if (mp.count(s[i])){
                if (mp[s[i]] != t[i])
                    return false;
            }

            if (!back_mp.count(t[i])) {
                back_mp[t[i]] = s[i];
            } else if (back_mp[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};