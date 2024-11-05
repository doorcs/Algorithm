#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, W;
  cin >> n >> W;
  vector<ll> v(n);
  for (auto& it : v) cin >> it;

  for (int i = 1; i < n; i++) {
    if (v[i-1] < v[i]) {
      ll cnt = W/v[i-1];
      W += (v[i]-v[i-1])*cnt;
    }
  }

  cout << W;
}
