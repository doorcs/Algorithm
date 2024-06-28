#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;
  // vector<pair<int, int>> vp;
  // for (int i = 0; i < N; i++) {
  //   int x, y;
  //   cin >> x >> y;
  //   vp.push_back({x, y});
  // }

  // 이걸 단 두줄로 처리할 수 있다.. https://www.acmicpc.net/source/78711285 - by `astrayt`

  vector<pair<int, int>> vp(N);
  for (auto& [x, y] : vp) cin >> x >> y; // 값을 입력할 때도 범위기반 for문을 쓸 수 있다는걸 봐도 봐도 까먹는다.. 꼭 의식적으로 써보기!!!

  ran::sort(vp, [](auto a, auto b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    return a.first < b.first;
  });

  for (const auto& it : vp) cout << it.first << ' ' << it.second << '\n';
}
