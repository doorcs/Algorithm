#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  int ans = 1;
  for (const auto& it : s)
    if (it == ',') ans++;

  cout << ans;
}
