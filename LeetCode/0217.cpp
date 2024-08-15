class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> mp;
    for (const auto& it : nums) mp[it]++;

    bool flag = false;
    for (const auto [k, v] : mp) {
      if (v > 1) {
        flag = true;
        break;
      }
    }

    return (flag ? true : false);
  }
};