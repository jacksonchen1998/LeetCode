class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // support variables
        int len = nums.size();
        bool seen[len + 1];
        vector<int> res(2);
        // preparing seen
        for (int i = 1; i <= len; i++) seen[i] = false;
        // parsing nums and finding the first part of res
        for (int i: nums) seen[i] = (!seen[i] || bool(1 + (res[0] = i))); // bool(1 + (res[0] = i)) is a trick to make sure res[0] is set only once
        // parsing seen and finding the second part of res
        for (int i = 1; i <= len; i++) if (!seen[i]) return res[1] = i, res; // res[1] = i is a trick to make sure res[1] is set only once
        return res;
    }
};