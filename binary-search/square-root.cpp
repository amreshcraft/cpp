class Solution {
public:
  int mySqrt(int x) {
    int res = 0;
    for (int i = 1; i * i <= x; i++) {
      res = i;
    }
    return res;
  }
};
