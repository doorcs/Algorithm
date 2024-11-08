#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v(3);
  for (auto& it : v) cin >> it;
  sort(v.begin(), v.end());

  for (const auto& it : v) cout << it << ' ';
}
