#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i < n; i++) {
    int curr = i, sum = i;
    while (curr) {
      sum += curr%10;
      curr/=10;
    }
    if (sum == n) return cout << i, 0;
  }

  cout << 0;
} // 4ms (0.04sec)
