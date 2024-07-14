#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int gcd(int A, int B) { // Euclidean Algorithm | 유클리드 알고리즘(호제법)
  if (B == 0) return A;
  return gcd(B, A%B);
} // A를 B로 나눈 `나머지`를 r이라 할 때, A와 B의 최소공배수는 B와 r의 최소공배수와 같다. | 만약 r이 0이면 A와 B의 최소공배수는 B이다.

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int A, B;
    cin >> A >> B;
    cout << A*B / gcd(A, B)<< '\n'; // `gcd(A, B) * lcm(A, B)` == `A * B` | 두 수의 곱 == `두 수의 최소공배수(lcm)` * `두 수의 최대공약수(gcd)`
  }
}

/* `std::lcm()` 또는 `std::gcd()`를 활용하는 딸깍 풀이 (since C++17):

#include <bits/stdc++.h>

// namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int A, B;
    cin >> A >> B;
    cout << lcm(A, B) << '\n'; // cout << A*B / gcd(A, B) << '\n';
  }
}

*/
