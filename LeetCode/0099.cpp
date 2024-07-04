class Solution {
 public:
  void dfs(int idx, vector<int>& nums, vector<vector<int>>& ret) {
    vector<int> tmp;
    tmp.push_back(nums[idx]);
    while (idx < nums.size()) {
      dfs(idx+1, nums, ret);
    }
    ret.push_back(tmp);
  }

  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ret{{}};

    for (int i = 0; i < nums.size(); i++) {
      dfs(i, nums, ret);
    }

    ranges::sort(ret);
    auto [fr, rr] = ranges::unique(ret);
    ret.erase(fr, rr);
    return ret;
  }
};
