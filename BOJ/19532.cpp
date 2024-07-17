#include <bits/stdc++.h>

using ll = long long;
using namespace std;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  for (int i = -999; i < 1000; i++) {
    for (int j = -999; j < 1000; j++) { // 다 해봤자 2000 * 2000 == 4'000'000. 컴퓨터는 엄청나게 빠르다!
      if (a*i + b*j == c && d*i + e*j == f) {
        cout << i << ' ' << j;
        return 0;
      }
    }
  }
}
