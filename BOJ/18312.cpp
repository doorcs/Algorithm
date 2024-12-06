#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K, ans = 0;
  cin >> N >> K;
  for (int hr = 0; hr <= N; hr++) {
    for (int min = 0; min < 60; min++) {
      for (int sec = 0; sec < 60; sec++) {
        if (K == hr/10 || K == hr%10 || K == min/10 || K == min%10 || K == sec/10 || K == sec%10) ans++;
      }
    }
  } // 최대 반복 횟수는 24*60*60 == 3600*24 == 72000 + 7200 + 7200 == 86400

  cout << ans;
}
