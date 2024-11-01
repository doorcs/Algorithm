#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T, N;
  cin >> T >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;

  cout << (reduce(v.begin(), v.end()) >= T ? "Padaeng_i Happy" : "Padaeng_i Cry");
}
