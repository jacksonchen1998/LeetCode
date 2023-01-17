class Solution{
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> cnt1, cnt2;
        
        for (auto c: ransomNote) {
            cnt1[c] += 1;
        }
        
        for (auto c: magazine) {
            cnt2[c] += 1;
        }
        
        for (auto c: ransomNote) {
            if (cnt1[c] > cnt2[c]) {
                return false;
            }
        }
        
        return true;
    }
};