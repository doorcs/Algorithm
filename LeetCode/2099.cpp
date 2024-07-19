class Solution {
public:
  vector<int> maxSubsequence(vector<int>& nums, int k) {
    size_t sz = nums.size();
    vector<pair<int, int>> vp;
    for (int i = 0; i < sz; i++) {
      vp.push_back({nums[i], i});
    }

    ranges::sort(vp, [](const auto& a, const auto& b) {
      return a.first < b.first;
    });

    unordered_map<int, int> excl;
    for (int i = 0; i < sz-k; i++) excl[vp[i].second]++;

    vector<int> ret;
    for (int i = 0; i < sz; i++) {
      if (excl[i]) continue;
      else ret.push_back(nums[i]);
    }

    return ret;
  }
};
