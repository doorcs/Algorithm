#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c;
  while (cin >> a >> b >> c) {
    if (!a) return 0;

    if (a+b+c-2*max({a, b, c}) <= 0) {
      cout << "Invalid\n";
    } else if (a == b && b == c) {
      cout << "Equilateral\n";
    } else if (a == b || b == c || c == a) {
      cout << "Isosceles\n";
    } else {
      cout << "Scalene\n";
    }
  }
}
