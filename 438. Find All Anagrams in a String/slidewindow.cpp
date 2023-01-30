class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
            int n = s.length(), l = p.length();
            vector<int> res;
            vector<int> vp(26, 0), vs(26, 0);

            for (char c: p)
                ++vp[c - 'a'];

            for (int i = 0; i < n; i++) {
                if (i >= l)
                    --vs[s[i - l] - 'a'];
                ++vs[s[i] - 'a'];
            if (vs == vp)
                res.push_back(i + 1 - l);
            }
            return res;
        }
};