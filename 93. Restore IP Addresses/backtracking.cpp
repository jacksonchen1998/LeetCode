class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        int num = 0;
        backtracking(s, res, 0, "");
        return res;
    }

    void backtracking(string s, vector<string>& res, int num, string temp) {
        if (num == 4 && s.empty()) {
            res.push_back(temp.substr(0, temp.length() - 1));
            return;
        }

        if (num == 4 || s.empty())
            return;

        for (int i = 0; i < 3; i++) {
            if (num > 4 || i + 1 > s.length())
                break;
            if (stoi(s.substr(0, i + 1)) > 255)
                break;
            if (i != 0 && s[0] == '0')
                continue;

            backtracking(s.substr(i + 1), res, num + 1, temp + s.substr(0, i + 1) + ".");
        }
    }
};