#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    int fr = 1e9, rr = -1e9;
    while (N--) {
      int curr; cin >> curr;
      fr = min(curr, fr);
      rr = max(curr, rr);
    }
    cout << fr << ' ' << rr << '\n';
  }
} // 값 비교 풀이, 300ms

/* 첫 풀이: ( 정렬 활용, 512ms )

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vector<int> v(N);
    for (auto& it : v) cin >> it;
    sort(v.begin(), v.end());

    cout << v[0] << ' ' << v[N-1] << '\n';
  }
}

*/
