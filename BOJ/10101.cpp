#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  cin >> A >> B >> C;

  int sum = A+B+C;
  if (sum != 180) {
    cout << "Error";
  } else {
    if (A == 60 && B == 60) {
      cout << "Equilateral";
    } else if (A != B && B != C && C != A) {
      cout << "Scalene";
    } else {
      cout << "Isosceles";
    }
  }
}
