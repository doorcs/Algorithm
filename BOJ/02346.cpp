#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  deque<pair<int, int>> dq(N);
  int init = 0;
  for (auto& [a, b] : dq) {
    a = ++init; // index
    cin >> b;
  }

  while (!dq.empty()) {
    auto [idx, num] = dq.front();
    cout << idx << ' ';
    dq.pop_front();
    if (dq.empty()) return 0;

    if (num > 0) {
      for (int i = 0; i < num-1; i++) { // 현재 위치의 풍선을 터뜨렸기 때문에 `num-1`번 오른쪽으로
        dq.push_back(dq.front());
        dq.pop_front();
      }
    } else { // num < 0
      for (int i = 0; i < -num; i++) { // num번 왼쪽으로
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
  }
}
