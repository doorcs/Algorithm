class Solution {
public:
  int lower_bound(vector<int>& vec, int val) {
    int fr = 0, rr = vec.size()-1; // fr == lo, rr == hi
    while (fr <= rr) {
      int mid = fr + (rr-fr)/2;
      if (vec[mid] < val) {
        fr = mid+1;
      } else {
        rr = mid-1;
      }
    }
    return fr;
  }

  int triangleNumber(vector<int>& nums) {
    if (nums.size() < 3) return 0;
    ranges::sort(nums); // sort(nums.begin(), nums.end());
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i+1; j < nums.size(); j++) {
        if (nums[i] == 0 || nums[j] == 0) continue;
        ans += lower_bound(nums, nums[i]+nums[j]) - (j+1);
      }
    }
    return ans;
  }
};

/* 완탐 ( 2012ms Accepted ㅋㅋ )

class Solution {
public:
  int triangleNumber(vector<int>& nums) {
    if (nums.size() < 3) return 0;
    ranges::sort(nums);
    int ans = 0;

    for (int i = 0; i < nums.size()-2; i++) {
      for (int j = i+1; j < nums.size()-1; j++) {
        for (int k = j+1; k < nums.size(); k++) {
          if (nums[i] + nums[j] > nums[k]) ans++;
        }
      }
    }

    return ans;
  }
};

*/
