#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N, K;
  cin >> N >> K;

  deque<int> dq;
  for (int i = 0; i < N; ) dq.push_back(++i); // for (int i = 1; i <= N; i++) dq.push_back(i);

  for (int i = 0; i < K; ++i) {
    int A, B, C;
    cin >> A >> B >> C;

    deque<int> cut(dq.begin()+(A-1), dq.begin()+B);
    dq.erase(dq.begin()+(A-1), dq.begin()+B); // exclusive range!! fr포함 rr제외

    dq.insert(dq.begin() + C, cut.begin(), cut.end());
  }

  for (int i = 0; i < 10; i++) cout << dq[i] << '\n';
}
