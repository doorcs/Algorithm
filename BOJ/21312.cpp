// 내 풀이 (조건 분기):
#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int A, B, C; cin >> A >> B >> C;

  if (A&1 && B&1 && C&1) { // ABC를 먼저 처리해줘야 AB, BC, AC로 처리할 수 있음
    cout << A*B*C;
    return 0;
  }

  if (A&1 && B&1) {
    cout << A*B;
    return 0;
  } else if (B&1 && C&1) {
    cout << B*C;
    return 0;
  } else if (A&1 && C&1) {
    cout << A*C;
    return 0;
  }

  if (A&1) cout << A;
  else if (B&1) cout << B;
  else if (C&1) cout << C;
  else cout << A*B*C; // 전부 짝수
}

/* 괜찮아보이는 다른 풀이:

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int A, B, C; cin >> A >> B >> C;

  int res1 = 1, res2 = 1; // res1은 홀수 곱, res2는 짝수 곱
  int odd = 0;

  if (A&1) res1 *= A, odd++;
  else res2 *= A;

  if (B&1) res1 *= B, odd++;
  else res2 *= B;

  if (C&1) res1 *= C, odd++;
  else res2 *= C;

  if (!odd) return cout << res2, 0; // cout은 값을 반환하지 않으니까 이런 식으로도 쓸 수 있구나.. 신기하긴 한데 좋은 방식은 아닌 것 같다
  
  cout << res1; // 홀수끼리의 곱과 짝수끼리의 곱을 따로 관리하고, 홀수가 하나도 없었다면 짝수 곱을, 홀수가 하나라도 있었다면 홀수 곱을 출력
}

*/
