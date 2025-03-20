#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> stairs(301), dp(301); // 초기값을 깔끔하게 처리해두려면 공간을 일단 잡아둬야한다!!
  int N; cin >> N;
  for (int i = 1; i <= N; i++) cin >> stairs[i];
  dp[1] = stairs[1], dp[2] = stairs[1]+stairs[2];

  for (int i = 3; i <= N; i++) {
    dp[i] = max(dp[i-2], stairs[i-1]+dp[i-3])+stairs[i];
  }
  cout << dp[N];
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> stairs(301), dp(301); // 공간을 일단 잡아두기
  int N; cin >> N;
  for (int i = 1; i <= N; i++) cin >> stairs[i];
  dp[1] = stairs[1], dp[2] = stairs[1]+stairs[2], dp[3] = max(stairs[1], stairs[2])+stairs[3];

  for (int i = 4; i <= N; i++) {
    dp[i] = max(dp[i-2], stairs[i-1]+dp[i-3])+stairs[i];
  }
  cout << dp[N];
}

*/
