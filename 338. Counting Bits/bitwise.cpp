class Solution{
public:
  vector<int> countBits(int n){
    vector<int> result(n + 1, 0);
    for(int i = 0; i <= n; ++i)
      result[i] = result[i - (i & -i)] + 1;
    return result;
  }
};

class Solution{
public:
  vector<int> countBits(int n){
    vector<int> result;
    for(int i = 0; i <=n; ++i)
      result.push_pack(bitset<32>(i).count());
  }
  return result;
};
