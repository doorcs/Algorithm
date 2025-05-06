#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void replace(vector<char>& v, int fr, int rr) {
  int sz = rr-fr;
  if (sz == 1) return;

  for (int i = fr + sz/3; i < fr + (sz/3)*2; i++) v[i] = ' ';
  replace(v, fr, fr + sz/3);
  replace(v, fr + (sz/3)*2, rr);
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  while (cin >> N) {
    if (N == 0) {
      cout << "-\n";
      continue;
    }
    ll init = pow(3, N);
    vector<char> v(init, '-'); // 27이면, 0에서 8까지는 유지, 9에서 18까지는 공백, 19에서 27까지는 유지
    replace(v, 0, init);

    for (const auto& it : v) cout << it;
    cout << '\n';
  }
}
