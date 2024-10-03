// 이분탐색 풀이(556ms):
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

    int M; cin >> M;
    while (M--) {
      int fr = 0, rr = N-1, curr = 0, qry;
      cin >> qry;
      while (fr <= rr) {
        int mid = fr + (rr-fr)/2;
        if (v[mid] < qry) {
          fr = mid+1;
        } else if (qry < v[mid]) {
          rr = mid-1;
        } else {
          curr = 1;
          break;
        }
      }
      cout << curr << '\n';
    }
  }
}

/* 첫 풀이, map(std::unordered_map) 활용 풀이(1316ms):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    unordered_map<int, int> mp;
    int N; cin >> N;
    while (N--) {
      int tmp; cin >> tmp;
      mp[tmp]++;
    }
    int M; cin >> M;
    while (M--) {
      int qry; cin >> qry;
      cout << (mp[qry] ? 1 : 0) << '\n';
    }
  }
}

*/
