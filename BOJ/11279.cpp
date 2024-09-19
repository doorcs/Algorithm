#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  priority_queue<int> pq;
  int N; cin >> N;
  while (N--) {
    int x; cin >> x;
    if (!x) { // x == 0
      if (pq.empty()) {
        cout << 0 << '\n';
      } else {
        cout << pq.top() << '\n';
        pq.pop();
      }
    } else {
      pq.push(x);
    }
  }
}
