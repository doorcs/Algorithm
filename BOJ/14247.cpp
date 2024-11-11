#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (auto& it : v) cin >> it.first;
  for (auto& it : v) cin >> it.second;
  sort(v.begin(), v.end(), [](auto a, auto b){
    return a.second < b.second;
  });

  ll ans = 0, curr = 0;
  for (const auto& [a, b] : v) {
    ans += a + b*curr++;
  }

  cout << ans;
}
