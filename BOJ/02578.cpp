#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<vector<int>> brd(5, vector<int>(5)), vst(5, vector<int>(5));
  for (auto& line : brd)
    for (auto& elem : line) cin >> elem;

  int ans = 0;
  for (int i = 0; i < 25; i++) {
    int curr, fin = 0;
    cin >> curr;
    ans++;

    for (int y = 0; y < 5; y++)
      for (int x = 0; x < 5; x++)
        if (brd[y][x] == curr) vst[y][x] = 1;

    if (ans < 12) continue; // best case는 대각선 두 줄과 가장자리 한 줄로 12번. 코테나 실전 문풀에서는 이런 최적화를 함부로 시도하지 말 것!!

    if (vst[0][0] && vst[1][1] && vst[2][2] && vst[3][3] && vst[4][4]) fin++;
    if (vst[0][4] && vst[1][3] && vst[2][2] && vst[3][1] && vst[4][0]) fin++;

    if (vst[0][0] && vst[0][1] && vst[0][2] && vst[0][3] && vst[0][4]) fin++;
    if (vst[1][0] && vst[1][1] && vst[1][2] && vst[1][3] && vst[1][4]) fin++;
    if (vst[2][0] && vst[2][1] && vst[2][2] && vst[2][3] && vst[2][4]) fin++;
    if (vst[3][0] && vst[3][1] && vst[3][2] && vst[3][3] && vst[3][4]) fin++;
    if (vst[4][0] && vst[4][1] && vst[4][2] && vst[4][3] && vst[4][4]) fin++;

    if (vst[0][0] && vst[1][0] && vst[2][0] && vst[3][0] && vst[4][0]) fin++;
    if (vst[0][1] && vst[1][1] && vst[2][1] && vst[3][1] && vst[4][1]) fin++;
    if (vst[0][2] && vst[1][2] && vst[2][2] && vst[3][2] && vst[4][2]) fin++;
    if (vst[0][3] && vst[1][3] && vst[2][3] && vst[3][3] && vst[4][3]) fin++;
    if (vst[0][4] && vst[1][4] && vst[2][4] && vst[3][4] && vst[4][4]) fin++;

    if (fin > 2) return cout << ans, 0;
  }
}
