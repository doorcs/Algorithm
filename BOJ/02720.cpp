#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int r; cin >> r; // remainder
    int q = 0, d = 0, n = 0;
    q += r/25;
    r %= 25;
    d += r/10;
    r %= 10;
    n += r/5;
    r %= 5; // 이제 r에는 4 이하의 값만 남음!

    cout << q << ' ' << d << ' ' << n << ' ' << r << '\n';
  }
}
