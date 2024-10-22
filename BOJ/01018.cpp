#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int calc(const vector<vector<char>>& brd, int y, int x, char a) {
  int ret = 0;
  char b = (a == 'B' ? 'W' : 'B');
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((i+j)&1) {
        if (brd[y+i][x+j] == a) ret++;
      } else {
        if (brd[y+i][x+j] == b) ret++;
      }
    }
  }
  return ret;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<vector<char>> brd(N, vector<char>(M));

  for (auto& li : brd) {
    for (auto& elem : li) cin >> elem;
  }

  int ans = 64; // worst case
  for (int i = 0; i < N-7; i++) {
    for (int j = 0; j < M-7; j++) {
      int curr = min(calc(brd, i, j, 'W'), calc(brd, i, j, 'B')); // 43*43 * ((8*8) * 2) <-- 필요한 총 연산 횟수: 236,672회.. 생각보다 많이, 많이 작다
      if (ans > curr) ans = curr;
    }
  }

  cout << ans;
}
