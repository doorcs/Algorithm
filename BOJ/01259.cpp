#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  while (cin >> N && N != 0) {
    string orig = to_string(N);
    string flipped{orig};
    ran::reverse(flipped);
    bool flg = false;

    for (int i = 0; i < (int)orig.size(); i++) { // iterator를 size_t로 선언? .size() 메서드의 반환값을 int로 캐스팅?
      if (orig[i] != flipped[i]) {
        flg = true;
        break;
      }
    }

    cout << (flg ? "no" : "yes") << '\n';
  }
}
