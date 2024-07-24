#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int TC; cin >> TC;
  while (TC--) {
    int N, M; cin >> N >> M;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    for (int i = 0; i < N; i++) {
      int tmp; cin >> tmp;
      q.push({tmp, i});
      pq.push(tmp);
    }

    int cnt = 0;
    while (!q.empty()) {
      auto it = q.front(); q.pop();
      if (it.first == pq.top()) {
        cnt++;
        if (it.second == M) {
          cout << cnt << '\n';
          break;
        }
        pq.pop();
      } else q.push(it);
    }
  }
}
