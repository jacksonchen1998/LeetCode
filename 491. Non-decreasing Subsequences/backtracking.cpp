class Solution {
public:
    void func(int index, vector<int>& nums, vector<int>& a, set<vector<int>>& ans) {
        int n = nums.size();
        
        if (index >= n) {
            if (a.size() >= 2)
                ans.insert(a);
            return;
        }
        
        if (!a.size() || nums[index] >= a.back()) {
            a.push_back(nums[index]);
            func(index + 1, nums, a, ans);
            a.pop_back();
        }
    
        func(index + 1, nums, a, ans);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        set<vector<int>> ans;
        func(0, nums, temp, ans);
        return vector(ans.begin(), ans.end());
    }
    
};