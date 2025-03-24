#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<vector<int>> brd(100, vector<int>(100)); // 전역 변수로 brd[100][100]을 잡아두는 것과 비슷
  int N; cin >> N;

  while (N--) {
    int x, y;
    cin >> x >> y;
    for (int i = y; i < y + 10; i++)
      for (int j = x; j < x + 10; j++) brd[i][j]++;
  }

  int ans = 0;

  for (auto li : brd) // vector<int> li
    for (auto elem : li) // int elem
      if (elem) ans++; // 0만 아니라면 모두 true이므로 ++이 한번이라도 실행된 경우 true 처리

  cout << ans;
}


/* 첫 풀이 (일반적인 이차원 배열 사용)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int brd[104][104];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    while (N--) {
        int x, y;
        cin >> x >> y;
        for (int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                brd[i][j] = 1; // 값이 중요하지 않아서 `brd[i][j]++;` 로도 가능
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (brd[i][j]) ans++;
        }
    }
    cout << ans;
}

*/
