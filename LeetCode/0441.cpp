class Solution {
public:
  int arrangeCoins(int n) {
    int curr = 1, res = 0;
    while (n) {
      if (n - curr < 0) break;
      n -= curr;
      curr++, res++;
    }
    return res;
  }
};
