class Solution { // Accepted, 33ms, 37.3MB
public:
  vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end()); // 따로 insert해주는 대신 생성자 활용
    vector<int> v1, v2;
    for (const auto& it : s1)
      if (s2.find(it) == s2.end()) v1.push_back(it);
    for (const auto& it : s2)
      if (s1.find(it) == s1.end()) v2.push_back(it);

    return {v1, v2}; // `vector<vector<int>> ret`을 만들어서 return하는 대신, 이렇게 initializer_list를 사용할 수 있음!
  }
};

/* 첫 풀이 - Accepted, 44ms, 41.1MB

class Solution {
public:
  vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp1, mp2;
    for (const auto& it : nums1) mp1[it]++;
    for (const auto& it : nums2)
      if (mp1[it]) mp2[it]++;

    vector<vector<int>> ret;
    vector<int> v1, v2;
    for (const auto& it : nums1)
      if (!mp2[it]) v1.push_back(it);
    for (const auto& it : nums2)
      if (!mp2[it]) v2.push_back(it);

    ranges::sort(v1);
    ranges::sort(v2);
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    ret.push_back(v1);
    ret.push_back(v2);

    return ret;
  }
};

*/
