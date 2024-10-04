#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool helper(vector<int>& vec, int val, int check) {
  ll tot = 0;
  for (const auto& it : vec) tot += min(it, val); // std::min() 함수를 쓰는게 가독성이 더 나은듯!

  return tot <= check; // 3항 연산자를 사용하는 대신 조건문을 그대로 리턴
}

ll fn(vector<int>& vec, int ceil) {
  int fr = 0, rr = 1e9;
  while (fr <= rr) {
    int mid = fr + (rr-fr)/2;
    if (helper(vec, mid, ceil)) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr; // 조건을 만족하지 않는 첫번째 값
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;

  int ceil; cin >> ceil;
  if (reduce(v.begin(), v.end()) <= ceil) {
    cout << *max_element(v.begin(), v.end()) // 제일 큰 값만 찾으면 되므로 배열을 정렬하는 대신 std::max_element() 활용
  } else {
    cout << fn(v, ceil)-1; // 조건을 만족하는 최댓값을 찾기 위해 -1
  }
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool helper(vector<int>& vec, int val, int check) {
  ll tot = 0;
  for (const auto& it : vec) tot += (it < val ? it : val); // 둘 중에 더 작은 값을 더해주기

  return (tot <= check ? true : false);
}

ll fn(vector<int>& vec, int ceil) {
  int fr = 0, rr = 1e9;
  while (fr <= rr) {
    int mid = fr + (rr-fr)/2;
    if (helper(vec, mid, ceil)) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr; // 조건을 만족하지 않는 첫번째 값
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  sort(v.begin(), v.end())

  int ceil; cin >> ceil;
  if (reduce(v.begin(), v.end()) <= ceil) {
    cout << v[N-1];
  } else {
    cout << fn(v, ceil)-1; // 조건을 만족하는 최댓값을 찾기 위해 -1
  }
}

*/
