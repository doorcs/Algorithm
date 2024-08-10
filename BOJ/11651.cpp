#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;

  vector<pair<int, int>> v(N); // range based for문과 reference로 입력을 처리하려면 벡터의 크기를 미리 설정해둬야함!
  for (auto& [a, b] : v) cin >> a >> b; /* beautiful */

  ran::sort(v, [](auto a, auto b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }
    return a.second < b.second;
  });

  for (const auto& it : v) cout << it.first << ' ' << it.second << '\n';
}

/* first code I wrote: ( lines 14-15 )
  vector<pair<int, int>> v;
  while (N--) {
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }
*/
