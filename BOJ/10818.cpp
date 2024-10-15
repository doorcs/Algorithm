#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N, max = -1e18, min = 1e18;
  cin >> N;
  while (N--) {
    int tmp; cin >> tmp;
    if (tmp > max) max = tmp;
    if (tmp < min) min = tmp;
  }
  cout << min << ' ' << max;
}
