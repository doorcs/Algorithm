#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 0; i < N; i++) {
    if (i == N-1 && N&1) {
      cout << 3;
    } else {
      cout << 1 + i%2 << ' '; // 홀수일 땐 `%2` 값이 1이고, 짝수일 땐 `%2` 값이 0이라는 것을 활용할 수 있다!
    }
  }
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 0; i < N; i++) {
    if (i == N-1 && !(i&1)) cout << 3;
    else {
      if (i&1) {
        cout << 2 << ' ';
      } else {
        cout << 1 << ' ';
      }
    }
  }
}

*/
