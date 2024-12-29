#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int E, S, M;
  cin >> E >> S >> M;
  int ans = 1;
  while (true) {
    if (ans%15 == E%15 && ans%28 == S%28 && ans%19 == M%19) break; // 어차피 E, S, M 모두 1에서부터 1씩 증가하므로 변수를 여러 개 둘 필요가 없다!
    ans++;
  }

  cout << ans;
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int E, S, M;
  cin >> E >> S >> M;
  int a = 0, b = 0, c = 0;

  int ans = 0;
  while (true) {
    a++, b++, c++, ans++;
    if (a > 15) a = 1;
    if (b > 28) b = 1;
    if (c > 19) c = 1;

    if (E == a && S == b && M == c) break;
  }

  cout << ans;
}

*/
