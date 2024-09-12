#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// (since C++17) std::gcd(), std::lcm()을 쓸 수도 있지만..
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
} // `a와 b의 GCD` == `b와 a%b의 GCD`

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;
  cout << gcd(A, B) << '\n' << A*B/gcd(A, B);
}

/*

ll lcm(ll a, ll b) {
  return a*b/gcd(a, b);
}

*/
