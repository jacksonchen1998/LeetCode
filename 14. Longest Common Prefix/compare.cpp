class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len = 201;
        for (auto word: strs) {
            if (min_len > word.size())
                min_len = word.size();
        }
        string res = "";
        for (int index = 0; index < min_len; index++) {
            for (int word = 0; word < strs.size()-1; word++) {
                if (strs[word][index] != strs[word+1][index])
                    return res;
            }
            res += strs[0][index];
        }
        return res;
    }
};