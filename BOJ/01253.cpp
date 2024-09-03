#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, ans = 0;
  cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  ranges::sort(v);

  for (int i = 0; i < N; i++) {
    int fr = 0, rr = N-1;
    while (fr < rr) {
      if (v[fr] + v[rr] < v[i]) {
        fr++;
      } else if (v[fr] + v[rr] > v[i]) {
        rr--;
      } else { // v[fr] + v[rr] == v[i]
        if (fr == i) { // 다른 두 수의 합이기 때문에
          fr++;
          continue;
        }
        if (rr == i) {
          rr--;
          continue;
        }
        ans++;
        break;
      }
    }
  }

  cout << ans;
}
