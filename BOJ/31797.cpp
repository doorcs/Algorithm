#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  deque<pair<int, int>> dq;

  for (int i = 1; i <= M; i++) {
    int h1, h2;
    cin >> h1 >> h2;
    dq.push_back({h1, i});
    dq.push_back({h2, i});
  }
  sort(dq.begin(), dq.end());

  for (int i = 0; i < N; i++) {
    auto tmp = dq.front();
    dq.pop_front();
    dq.push_back(tmp);
  }

  cout << dq.back().second;
}
