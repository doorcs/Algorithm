#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M; cin >> M;
  int all = 0b111111111111111111111, empty = 0, mask = 0; // semantic하게 시프트 연산을 활용하기 위해 20개가 아니라 21개를 채워둠!
  while (M--) {
    string qry;
    int pos;
    cin >> qry;

    if (qry == "add") {
      cin >> pos;
      mask |= (1 << pos);
    } else if (qry == "remove") {
      cin >> pos;
      mask &= ~(1 << pos);
    } else if (qry == "check") {
      cin >> pos;
      if ((mask & (1 << pos)) != 0) {
        cout << 1 << '\n';
      } else {
        cout << 0 << '\n';
      }
    } else if (qry == "toggle") {
      cin >> pos;
      mask ^= (1 << pos); // xor 연산으로 (1,1)이면 0으로, (0, 1)이면 1로! ( 뒤에 오는 (1<<pos)는 무조건 1이기 때문에, [0, 0]이나 [1, 0]은 고려할 필요가 없다!! )
    } else if (qry == "all") {
      mask = all;
    } else { // qry == "empty"
      mask = empty;
    }
  }
}
