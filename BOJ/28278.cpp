#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> stk; // 여기선 스택처럼 사용!

  int N; cin >> N;
  while (N--) {
    int qry; cin >> qry;
    switch (qry) {
      case 1:
        int tmp;
        cin >> tmp;
        stk.push_back(tmp);
        break;
      case 2:
        if (stk.empty()) { // `.size()` 메소드를 활용할 수도 있지만, 상수시간 실행이 보장되는 `.empty()` 사용
          cout << -1 << '\n';
          break;
        }
        cout << stk.back() << '\n';
        stk.pop_back();
        break;
      case 3:
        cout << stk.size() << '\n';
        break;
      case 4:
        cout << (stk.empty() ? 1 : 0) << '\n';
        break;
      case 5:
        if (stk.empty()) {
          cout << -1 << '\n';
          break;
        }
        cout << stk.back() << '\n';
    }
  }
}

/* `case 4` 부분에서 삼항 연산자 대신 일반 if-else문을 사용하면 132ms -> 128ms로 실행속도가 조금 더 빨라진다

      case 4:
        if (stk.empty()) { cout << 1 << '\n'; }
        else cout << 0 << '\n';
        break;

*/
