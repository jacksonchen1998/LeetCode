class Solution {
public:
    int jump(vector<int>& nums) {
        int index = 0, res = 0, l = nums.size();
        vector<int> storage (l, 0);

        if (l == 1) return 0;
        storage[0] = nums[0];
        for (int i = 1; i < l; i ++) {
            storage[i] = max(storage[i-1], nums[i]+i);
        }
        while (index < l -1) {
            res += 1;
            index = storage[index];
        }
        return res;
    }
};