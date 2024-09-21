#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b;

  while (cin >> a >> b) {
    if (!a && !b) return 0;

    if (!(b%a)) { // a가 b의 약수일 경우
      cout << "factor\n";
    } else if (!(a%b)) { // a가 b의 배수일 경우 == b가 a의 약수일 경우
      cout << "multiple\n";
    } else { // 둘 다 아닐 경우
      cout << "neither\n";
    }
  }
}
