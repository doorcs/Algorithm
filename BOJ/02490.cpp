#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  for (int i = 0; i < 3; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;
    if (sum == 0) {
      cout << "D";
    } else if (sum == 1) {
      cout << "C";
    } else if (sum == 2) {
      cout << "B";
    } else if (sum == 3) {
      cout << "A";
    } else if (sum == 4) {
      cout << "E";
    }
    cout << '\n';
  }
}

/* 첫 풀이 (switch문 사용)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  while (getline(cin, s)) {
    stringstream ss(s);
    int tmp, res = 0;
    while (ss >> tmp) {
      res += tmp;
    }
    switch (res) {
      case 0:
        cout << 'D' << '\n';
        break;
      case 1:
        cout << 'C' << '\n';
        break;
      case 2:
        cout << 'B' << '\n';
        break;
      case 3:
        cout << 'A' << '\n';
        break;
      default:
        cout << 'E' << '\n';
        break;
    }
  }
}

*/
