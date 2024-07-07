class Solution {
public:
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ret;
    int sz = nums.size();

    for (int i = 0; i < (1<<sz); i++) {
      vector<int> tmp;
      for (int j = 0; j < sz; j++) {
        if ((i & (1<<j)) != 0) {
          tmp.push_back(nums[j]);
        }
      }
      ranges::sort(tmp); // sort(tmp.begin(), tmp.end());
      ret.push_back(tmp);
    }

    ranges::sort(ret);
    auto [fr, rr] = ranges::unique(ret);
    ret.erase(fr, rr); // ret.erase(unique(ret.begin(), ret.end()), ret.end());

    return ret;
  }
};
