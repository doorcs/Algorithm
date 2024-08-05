#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;
  queue<int> q;
  for (int i = 1; i < N+1; i++) {
    q.push(i);
  }
  cout << '<';
  while (N--) {
    int rep = K;
    while (--rep) {
      int tmp = q.front();
      q.pop();
      q.push(tmp);
    }
    cout << q.front();
    q.pop();
    if (!q.empty()) cout << ", ";
  }
  cout << '>';
}
