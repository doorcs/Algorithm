#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b;
  while (cin >> a >> b) {
    if (!a) return 0;

    cout << (a > b ? "Yes" : "No") << '\n';
  }
}
