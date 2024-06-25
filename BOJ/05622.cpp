// 첫 풀이:
#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string s; cin >> s;
  int ans = 0;

  for (const auto& c : s) {
    if (c <= 'C') {
      ans += 3;
    } else if (c <= 'F') {
      ans += 4;
    } else if (c <= 'I') {
      ans += 5;
    } else if (c <= 'L') {
      ans += 6;
    } else if (c <= 'O') {
      ans += 7;
    } else if (c <= 'S') {
      ans += 8;
    } else if (c <= 'V') {
      ans += 9;
    } else ans += 10;
  }

  cout << ans;
}

/* 다른 풀이 1 (배열을 활용):

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

// PQRS 부분 처리가 귀찮은데, 그냥 배열에 값을 하드코딩해두면 main()이 깔끔함
ll sec[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string s; cin >> s;
  int ans = 0;

  for (const auto& c : s) {
    ans += sec[c-65];
  }

  cout << ans;
}

*/

///////////////////////////////////////////////////////////////////////////////////////////////

/* 다른 풀이 2 (굳이...):

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string s; cin >> s;
  int ans = 0;

  for (const auto& c : s) {
    if (c <= 79) {
      ans += (c-65)/3 + 3;
    } else if (c <= 83) { // `PQRS` 부분 때문에 깔끔하게 처리가 안 됨
      ans += 8;
    } else if (c <= 86) {
      ans += 9;
    } else {
      ans += 10;
    }
  }

  cout << ans;
}

*/
