// 첫 풀이:
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

ll dp[99] = {0, 1, 1, }; // 숫자가 커서 int 쓰면 오버플로우..

ll calc(ll N) {
  if (dp[N]) return dp[N];

  dp[N] = calc(N-2) + calc(N-1);
  return dp[N];
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N; cin >> N;
  cout << calc(N);
}

/* 계산하는 함수를 분리하지 않는 풀이 ( 반복문 ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

ll dp[99] = {0, 1, 1, };

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N; cin >> N;
  // cout << calc(N);
  for (int i = 3; i < N+1; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }
  cout << dp[N];
}

*/
