#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  vector<int> dp(N, 1);

  for (int i = 1; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (v[i] > v[j]) dp[i] = (dp[j]+1 > dp[i] ? dp[j]+1 : dp[i]); // if (v[i] > v[j]) dp[i] = max(dp[i], dp[j]+1);
    }
  }

  cout << *max_element(dp.begin(), dp.end());
}

  // sort(dp.begin(), dp.end(), [](auto a, auto b) {
  //   return a > b;
  // });
  // cout << dp[0];

  // 또는
  // sort(dp.begin(), dp.end());
  // cout << dp[N-1];
