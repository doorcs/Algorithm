#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
  int N = info.size();
  vector<vector<int>> dp(120, vector<int>(120));
  dp[0][0] = 1;

  for (int i = 0; i < N; i++) {
    vector<vector<int>> next_dp(120, vector<int>(120));
    int adda = info[i][0], addb = info[i][1];

    for (int a = 0; a < n; a++) {
      for (int b = 0; b < m; b++) {
        if (!dp[a][b]) continue;

        if (a+adda < n) next_dp[a+adda][b] = 1;
        if (b+addb < m) next_dp[a][b+addb] = 1;
      }
    }
    
    dp = next_dp;
  }

  for (int a = 0; a < n; a++)
    for (int b = 0; b < m; b++)
      if (dp[a][b]) return a;

  return -1;
}
