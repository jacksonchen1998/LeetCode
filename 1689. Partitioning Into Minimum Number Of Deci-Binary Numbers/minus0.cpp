class Solution {
public:
    int minPartitions(string n) {
        int res = 0, len = n.size()-1;
        while (len >= 0) {
            res = max(res, n[len]-'0');
            len--;
        }
        return res;
    }
};