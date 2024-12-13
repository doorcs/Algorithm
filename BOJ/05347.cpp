#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) { // 사실 C++17부터 std::lcm(), std::gcd()가 있지만..
  if (b == 0) return a;
  return gcd(b, a%b);
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  while (n--) {
    ll a, b;
    cin >> a >> b;

    cout << a*b/gcd(a, b) << '\n';
  }
}

/* 첫 풀이 (std::lcm() 활용)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b) << '\n';
  }
}

*/
