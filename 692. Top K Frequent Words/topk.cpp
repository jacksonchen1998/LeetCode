class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> word_count;
        for (auto word: words)
            word_count[word]++;
        vector<pair<string, int>> word_count_vec(word_count.begin(), word_count.end());
        sort(word_count_vec.begin(), word_count_vec.end(), 
            [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second > b.second;
        });
        vector<string> res;
        for (int i = 0; i < k; i++)
            res.push_back(word_count_vec[i].first);
        return res;
    }
};