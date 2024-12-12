#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  while (N--) {
    string s; cin >> s;
    int sc = 0, cnt = 1;
    for (const auto& it : s) {
      if (it == 'O') {
        sc += cnt;
        cnt++;
      } else { // it == 'X'
        cnt = 1;
      }
    }
    cout << sc << '\n';
  }
}
