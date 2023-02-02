class Solution {
public:
    unordered_map<char, int> m;
    bool check(string& a, string& b) {
        int size_a = a.size(), size_b = b.size();
        int n = min(size_a, size_b);
        for (int i = 0; i < n; i++) {
            if (m[a[i]] > m[b[i]])
                return false;
            else if (m[a[i]] < m[b[i]])
                return true;
        }
        if (size_a > size_b)
            return false;
        return true;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0; i < order.size(); i++) {
            m[order[i]] = i;
        }
        for (int i = 0; i < words.size()-1; i++) {
            bool res = check(words[i], words[i + 1]);
            if (!res)
                return false;
        }
        return true;
    }
};