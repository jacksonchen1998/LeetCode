class Solution{
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        memset(bag, -1, sizeof(bag));

        for (auto i = 0; i < s1.size() ; i++)
            Union(s1[i] - 'a', s2[i] - 'a');

        for (auto i = 0; i < baseStr.size(); i++)
            baseStr[i] = Find(baseStr[i] - 'a') + 'a';

        return baseStr;
    }
private:
    int bag[26];

    int Find(int x) {
        if (bag[x] == -1)
            return x;
        return bag[x] = Find(bag[x]);
    }

    void Union(int x, int y) {
        int fx = Find(x);
        int fy = Find(y);
        if (fx != fy)
            if (fx < fy)
                bag[fy] = fx;
            else
                bag[fx] = fy;
    }
};