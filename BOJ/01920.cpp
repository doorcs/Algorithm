// 이진탐색 구현 풀이:
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

bool binary_search(const vector<int>& vec, int val);

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  ran::sort(v);

  int query; cin >> query;
  for (int i = 0; i < query; i++) {
    int val; cin >> val;
    cout << (binary_search(v, val) ? 1 : 0) << '\n';
  }
}

bool binary_search(const vector<int>& vec, int val) {
  int fr = 0, rr = vec.size()-1;

  while (fr <= rr) {
    int mid = fr + (rr - fr) / 2;
    if (vec[mid] == val) {
      return true;
    } else if (val < vec[mid]) {
      rr = mid-1;
    } else fr = mid+1;
  }
  return false;
}

/* 이진탐색 라이브러리 사용 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  ran::sort(v);

  int query; cin >> query;
  while (query) {
    int val; cin >> val;
    cout << (ran::binary_search(v, val) ? 1 : 0) << '\n';
    query--;
  }
}


*/


/* 예전 풀이 (해시맵 사용)

#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        mp[tmp]++;
    }

    int M; cin >> M;
    while (M--) {
        int query; cin >> query;
        if (mp[query]) cout << 1 << '\n'; // 0 == false, 나머지 값들은 전부 true
        else cout << 0 << '\n';
    }
}

*/
