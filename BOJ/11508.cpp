#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it; // for (int i = 0; i < N; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<>());

  ll ans = 0; // int형을 쓰면 12ms, long long형을 쓰면 16ms. 그런데 100,000 * 100,000 == 10,000,000,000이므로 int형을 쓰면 틀려야 하는 문제 아닌가?
  for (int i = 0; i < N; i++) {
    if ((i+1)%3) ans += v[i];
  }

  cout << ans;
}
