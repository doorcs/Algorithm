class Solution {
public:
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  // int vst[54][54] = {0, }; // C-style

  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int ret = 0;
    vector<vector<int>> vst(grid.size(), vector<int>(grid[0].size(), 0)); // vector<T>(count, value=T()); // 기본적으로 템플릿 파라미터의 기본 생성자를 호출하지만, value를 정해줄 수도 있다!!

    for (int i = 0; i < grid.size(); i++) { // y
      for (int j = 0; j < grid[i].size(); j++) { // x
        if (grid[i][j] && !vst[i][j]) {
          vst[i][j] = 1;
          int tmp = 0;
          queue<pair<int, int>> q;
          q.push({i, j});

          while (!q.empty()) {
            auto [y, x] = q.front(); q.pop();
            tmp++;

            for (int i = 0; i < 4; i++) {
              int ny = y + dy[i], nx = x + dx[i];

              if (ny >= 0 && nx >= 0 && ny < grid.size() && nx < grid[0].size() && grid[ny][nx] && !vst[ny][nx]) {
                q.push({ny, nx});
                vst[ny][nx] = 1;
              }
            }
          }

          if (tmp > ret) ret = tmp;
        }
      }
    }

    return ret;
  }
};
