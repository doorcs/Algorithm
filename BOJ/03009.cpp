#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<int, int> mp1, mp2;
  for (int i = 0; i < 3; i++) {
    int a, b;
    cin >> a >> b;
    mp1[a]++, mp2[b]++;
  }

  for (const auto& [k, v] : mp1) {
    if (v == 1) {
      cout << k << ' ';
      break;
    }
  }

  for (const auto& [k, v] : mp2) {
    if (v == 1) {
      cout << k;
      return 0;
    }
  }
}

/* 더 효율적인 풀이( 단순하게 if문으로 처리 가능한 문제! ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nulltpr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int x1, y1, x2, y2, x3, y3, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2) x = x3;
	else if (x1 == x3) x = x2;
	else x = x1;

	if (y1 == y2) y = y3;
	else if (y1 == y3) y = y2;
	else y = y1;

	cout << x << ' ' << y;
}

*/
