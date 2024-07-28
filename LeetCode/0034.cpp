// lower_bound(), upper_bound() 함수를 직접 구현하는 풀이:
class Solution {
public:
  int lower_bound(const vector<int>& vec, int val) {
    int fr = 0, rr = vec.size()-1;
    while (fr <= rr) {
      int mid = fr + (rr-fr)/2;
      if (vec[mid] < val) {
        fr = mid+1;
      } else rr = mid-1; // `vec[mid] == val`일 때, 뒤쪽 포인터를 앞으로 당겨준다
    }
    return fr;
  }

  int upper_bound(const vector<int>& vec, int val) {
    int fr = 0, rr = vec.size()-1;
    while (fr <= rr) {
      int mid = fr + (rr-fr)/2;
      if (vec[mid] <= val) { // `vec[mid] == val`일 때, 앞쪽 포인터를 뒤로 밀어준다
        fr = mid+1;
      } else rr = mid-1;
    }
    return fr;
  }

  vector<int> searchRange(vector<int>& nums, int target) {
    int lb = lower_bound(nums, target);
    int ub = upper_bound(nums, target);

    vector<int> ret;
    if (lb == ub) {
      ret.push_back(-1);
      ret.push_back(-1);
      return ret;
    };
    ret.push_back(lb);
    ret.push_back(ub-1);
    return ret;
  }
};

/* std::lower_bound(), std::upper_bound()를 활용하는 풀이:

namespace ran = std::ranges;

class Solution {
public:
  vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ret;
    auto lb = ran::lower_bound(nums, target), ub = ran::upper_bound(nums, target); // STL 함수의 리턴값은 보통 이터레이터!
    if (lb == ub) {
      ret.push_back(-1);
      ret.push_back(-1);
      return ret;
    }
    ret.push_back(lb-nums.begin());
    ret.push_back(ub-nums.begin()-1);
    return ret;
  }
};

*/
