class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int car = 0, sol_index = 0, total = 0;
        for (int index = 0; index < gas.size(); index++){
            total += gas[index] - cost[index];
            car += gas[index] - cost[index];

            if (car < 0){
                car = 0;
                sol_index = index + 1;
            }
        }
        if (total >= 0){
            return sol_index;
        } else{
            return -1;
        } 
    }
};