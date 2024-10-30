#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v(5);
  for (auto& it : v) cin >> it;
  int ans = 0;
  for (const auto& it : v) {
    if (it < 40) ans += 40;
    else ans += it;
  }

  cout << ans/5; // 항상 5로 나누어 떨어짐이 보장된다
}
