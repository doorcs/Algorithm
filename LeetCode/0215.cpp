class Solution {
public:
  int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq(nums.begin(), nums.end()); // set(unordered_set), deque, priority_queue, map(unordered_map) 모두 이런 방식의 초기화를 사용할 수 있다!
    for (int i = 1; i < k; i++) pq.pop();
    return pq.top(); // k-1번 pop한 다음 top을 return
  }
};

/*

  vector<pair<string, int>> vec{
    {"hi", 2}, {"bye", 1}, {"cpp", 3}, {"init", 9999}
  };

  unordered_map<string, int> mp(vec.begin(), vec.end());
  for (const auto& [a, b] : mp) cout << a << ' ' << b << '\n';

*/

/* alternatives: using `sort`

class Solution {
public:
  int findKthLargest(vector<int>& nums, int k) {
    ranges::sort(nums); // sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
  }
};

// or

class Solution {
public:
  int findKthLargest(vector<int>& nums, int k) {
    auto ret{nums};
    ranges::sort(ret);
    return ret[ret.size()-k];
  }
};

*/
