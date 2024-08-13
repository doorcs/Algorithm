class Solution {
public:
  int dy[4] = {1, 0, -1, 0}; // dy, dx 배열도 벡터를 사용하는게 나을까? 잘 모르겠다
  int dx[4] = {0, 1, 0, -1};

  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    vector<vector<int>> ret{image}; // image가 레퍼런스로 들어오기 때문에 그냥 image를 사용할 수도 있지만, 원본을 훼손하지 않기 위해 별도 변수 사용
    vector<vector<int>> vst(image.size(), vector<int>(image[0].size(), 0)); // int vst[54][54] = {0, };

    int cond = ret[sr][sc]; // 인접한 칸의 값이 image[sr][sc]와 같아야만 flood fill 수행 (condition)
    ret[sr][sc] = color;
    queue<pair<int, int>> q;
    q.push({sr, sc});
    vst[sr][sc] = 1;

    while (!q.empty()) {
      auto [y, x] = q.front(); q.pop();

      for (int i = 0; i < 4; i++) {
        int ny = y + dy[i], nx = x + dx[i];
        if (ny >= 0 && nx >= 0 && ny < ret.size() && nx < ret[0].size() && ret[ny][nx] == cond && !vst[ny][nx]) {
          ret[ny][nx] = color;
          vst[ny][nx] = 1;
          q.push({ny, nx});
        }
      }
    }

    return ret;
  }
};
