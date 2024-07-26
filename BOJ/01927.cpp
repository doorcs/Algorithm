// std::priority_queue 는 템플릿 파라미터의 `operator<`를 활용해 값들을 정렬하며, 기본적으로 최대 힙이다.
// 이때 래퍼 클래스의 `operator<`가 내림차순 정렬을 수행하도록 하면 최소 힙처럼 사용할 수 있다!

//래퍼 클래스를 활용한 풀이 ( priority_queue 선언부를 단순화 )
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

class Int {
public:
  Int(int n) : n(n) {}
  bool operator<(const Int& other) const { return n > other.n; } // `operator<`가 내림차순 정렬을 수행하도록 정의

  int n;
};

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  priority_queue<Int> pq; // 래퍼 클래스에 대한 priority_queue

  int N; cin >> N;
  while (N--) {
    int qry; cin >> qry;
    if (!qry) {
      if (pq.empty()) {
        cout << 0 << '\n';
      } else {
        cout << pq.top().n << '\n';
        pq.pop();
      }
    } else {
      pq.push({qry}); // pq.push(Int(qry)) 대신 initializer_list를 활용
    }
  }
}

/* 첫 풀이 ( priority_queue를 최소 힙으로 사용 ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  priority_queue<int, vector<int>, greater<int>> pq; // 그래도 이정도 사용법은 기억해두기!

  int N; cin >> N;
  while (N--) {
    int qry; cin >> qry;
    if (!qry) { // if (qry == 0) {
      if (pq.empty()) {
        cout << 0 << '\n';
      } else {
        cout << pq.top() << '\n';
        pq.pop();
      }
    } else {
      pq.push(qry);
    }
  }
}

*/
