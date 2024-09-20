include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fact (ll n) {
  return (n == 0 ? 1 : fact(n-1) * n);
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  cout << fact(N);
}

// ll fact (ll n) {
//   if (n == 0) return 1;
//   return fact(n-1) * n;
// }
