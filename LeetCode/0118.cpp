class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret{{1}};
    if (numRows == 1) return ret;

    for (int i = 0; i < numRows-1; i++) {
      vector<int> tmp{1};
      for (int j = 0; j < ret[i].size()-1; j++) {
        tmp.push_back(ret[i][j]+ret[i][j+1]);
      }
      tmp.push_back(1);
      ret.push_back(tmp);
    }

    return ret;
  }
};
