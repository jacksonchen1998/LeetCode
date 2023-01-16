class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int index = 0, len = intervals.size();
        while (index < len && intervals[index][1] < newInterval[0])
            res.push_back(intervals[index++]);
        while (index < len && intervals[index][0] <= newInterval[1]) {
            newInterval = {min(intervals[index][0], newInterval[0]), max(intervals[index][1], newInterval[1])};
            index++;
        }
        res.push_back(newInterval);
        while (index < len)
            res.push_back(intervals[index++]);
        return res;
    }
};