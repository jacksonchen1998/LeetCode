class Solution{
  public:
    bool hasAlternatingBits(int n){
      int num = (n >> 2) ^ n;
      return (num & -num) == num;
    }
};

class Solution{
  public:
  bool hasAlternatingBits(int n){
    long long num = (n >> 1) ^ n;
    return (num + 1 & n) == 0;
  }
};
