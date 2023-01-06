class Solution{
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count = 0;
        for (int i; i < costs.size(); i++){
            if (coins >= costs[i]){
                count += 1;
                coins -= costs[i];
            } else{
                return count;
            }
        }
        return count;
    }
};