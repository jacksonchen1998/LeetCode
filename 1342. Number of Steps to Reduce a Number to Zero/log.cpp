class Solution {
  public:
     int numberOfSteps(int num) {
       if (num == 0) return 0;
       return log2(num) + bitset<32>(num).count();
     }
};

class Solution {
  public:
     int numberOfSteps(int num) {
        if (num == 0) return 0;
        return 31 - __builtin_clz(num) + bitset<32>(num).count();
     }
};
