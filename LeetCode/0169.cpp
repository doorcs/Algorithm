class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (const auto& it : nums) {
      mp[it]++;
    }

    pair<int, int> ret;
    
    for (const auto& [a, b] : mp) {
      if (b > ret.second) ret = {a, b};
    }

    return ret.first;
  } 
};
