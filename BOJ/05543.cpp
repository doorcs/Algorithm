#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  cout << min({a, b, c}) + min(d, e) - 50; // constexpr T std::min<T>(std::initializer_list<T>);
}
