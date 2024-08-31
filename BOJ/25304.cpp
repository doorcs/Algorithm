#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll tot; cin >> tot;
  int rep; cin >> rep;
  while (rep--) {
    ll p, q; // price, quantity
    cin >> p >> q;
    tot -= p*q;
  }
  cout << (tot == 0 ? "Yes" : "No");
}
