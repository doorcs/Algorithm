#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, A, D; // A = init, D = diff
  cin >> N >> A >> D;
  vector<int> v(N);

  for (auto& it : v) cin >> it;

  int curr = A, cnt = 0;
  for (const auto& it : v) {
    if (it == curr) {
      curr += D;
      cnt++;
    }
  }
  cout << cnt;
}
