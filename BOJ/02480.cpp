#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int fi, se, th;
  cin >> fi >> se >> th;

  if (fi == se && se == th) { // `==` 연산자는 양쪽이 같으면 true(1)를, 다르면 false(0)를 반환. `A == B == C`처럼 쓰면, `1 == C` 또는 `0 == C`가 되어 의도와는 다르게 동작한다!
    cout << 10'000 + fi*1'000;
    return 0; // 계속 진행되지 않도록
  }

  if (fi == se) {
    cout << 1'000 + fi*100;
  } else if (se == th) {
    cout << 1'000 + se*100;
  } else if (fi == th) {
    cout << 1'000 + fi*100;
  } else {
    cout << 100 * max({fi, se, th});
  }
}
