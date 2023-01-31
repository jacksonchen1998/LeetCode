class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end(), greater<int>());
            int extra_stone = stones[0] - stones[1];
            stones.erase(stones.begin(), stones.begin() + 2);
            stones.push_back(extra_stone);
        }
        if (stones.size() == 1) {
            return stones[0];
        } else {
            return 0;
        }
    }
};