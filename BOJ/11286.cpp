#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Int {
public:
  bool operator<(const Int& other) const {
    if (abs(data) != abs(other.data)) {
      return abs(data) > abs(other.data);
    } else {
      return data > other.data; // std::priority_queue는 기본적으로 MAX heap, min heap처럼 쓰고싶을땐 `operator<`를 반대로 정의!
    }
  }

  int data;
};

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  priority_queue<Int> pq;
  int N; cin >> N;
  while (N--) {
    int qry; cin >> qry;
    if (!qry) { // pop()
      if (pq.empty()) {
        cout << 0 << '\n';
      } else {
        cout << pq.top().data << '\n';
        pq.pop();
      }
    } else { // push()
      pq.push({qry});
    }
  }
}
