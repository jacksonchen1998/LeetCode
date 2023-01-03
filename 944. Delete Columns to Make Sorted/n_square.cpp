class Solution {
    public:
        int minDeletionSize(vector<string>& strs){
            int del_cols = 0;
            for (int col=0; col < strs[0].length(); col++)
                for (int row=0; row < strs.size() - 1; row++){
                    if (strs[row][col] > strs[row+1][col]){
                        del_cols += 1;
                        break;
                    }
                }
            return del_cols;
        }
};