class Solution {
public:
  bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> mp1, mp2;
    for (const auto& it : arr) mp1[it]++;
    
    for (const auto& [k, v] : mp1) {
      if (mp2[v]) return false;
      mp2[v]++;
    }

    return true;
  }
};
