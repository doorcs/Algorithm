#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N, maximum = 0;
  cin >> N;
  map<ll, ll> mp;
  while (N--) {
    ll tmp; cin >> tmp;
    if (++mp[tmp] > maximum) maximum = mp[tmp];
  }

  for (const auto& [k, v] : mp)
    if (v == maximum) return cout << k, 0;
}
