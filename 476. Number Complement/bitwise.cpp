class Solution {
public:
  int pollute(int number){
    number |= number >> 1;
    number |= number >> 2;
    number |= number >> 4;
    number |= number >> 8;
    number |= number >> 16;
    return number;
  }
  int finComplement(int num){
    return num ^ pollute(num);
  }
};
