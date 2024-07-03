class Solution {
 public:
  int distributeCandies(vector<int>& candyType) {
    int sz = candyType.size() / 2;
    unordered_map<int, int> mp;
    for (const auto& it : candyType) {
      mp[it]++;
    }

    return mp.size() >= sz ? sz : mp.size();
  }
};
