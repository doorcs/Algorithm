#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

ll dp[48] = {0, 1, 1, };

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N; cin >> N;
  for (int i = 3; i < N+1; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[N];
}
