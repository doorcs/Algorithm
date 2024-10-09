#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// int dy[] = {1, 0, -1, 0};
// int dx[] = {0, 1, 0, -1};
// constexpr int dy[] = {1, 0, -1, 0}, dx[] = {0, 1, 0, -1};
vector<int> dy{1, 0, -1, 0}, dx{0, 1, 0, -1}; // 벡터 애호가

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<vector<int>> brd(N, vector<int>()), vst(N, vector<int>(N)); // 벡터의 생성자를 활용한 이차원 동적배열

  for (auto& arr : brd) {
    string s; cin >> s;
    for (const auto& ch : s) arr.push_back(ch-'0');
  }

  vector<int> ans;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (brd[i][j] && !vst[i][j]) {
        int curr = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        vst[i][j] = 1;
        while (!q.empty()) {
          auto [y, x] = q.front();
          q.pop();
          for (int i = 0; i < 4; i++) {
            int ny = y + dy[i], nx = x + dx[i];
            if (ny >= 0 && nx >= 0 && ny < N && nx < N && brd[ny][nx] && !vst[ny][nx]) {
              q.push({ny, nx});
              vst[ny][nx] = 1;
              curr++;
            }
          }
        }
        ans.push_back(curr);
      }
    }
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << '\n';
  for (const auto& it : ans) cout << it << '\n';
}
