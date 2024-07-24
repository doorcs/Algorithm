#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int lower_bound(vector<int>& vec, int val);
int upper_bound(vector<int>& vec, int val);

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  ran::sort(v);

  int M; cin >> M;
  while (M--) {
    int tmp; cin >> tmp;
    cout << upper_bound(v, tmp) - lower_bound(v, tmp)<< ' ';
  }
}

// 정렬된 배열이 {1 2 2 2 3} 일 때,
// lower_bound()는 첫번째 2를 가리키는 인덱스(1)를 반환하고
// upper_bound()는 마지막 2 다음 번 인덱스(4)를 반환한다
// 따라서 upper_bound의 리턴에서 lower_bound의 리턴을 빼 주면 그 원소의 수를 알 수 있다!

// binary_search의 구현과 구조적으로 완전히 동일하지만,

// `vec[mid] == val`일 때 mid 인덱스를 리턴하는 대신
//     lower_bound의 경우 rear 포인터를 앞으로 당겨오고 ( rr = mid-1 )
//     upper_bound의 경우 front 포인터를 뒤로 밀어준다 ( fr = mid+1 )

int lower_bound(vector<int>& vec, int val) {
  int fr = 0, rr = vec.size()-1;

  while (fr <= rr) {
    int mid = fr + (rr-fr)/2; // (fr + rr)/2 와 논리적으로 같고, 오버플로우를 방지
    if (vec[mid] < val) {
      fr = mid+1;
    } else if (val < vec[mid]) {
      rr = mid-1;
    } else { // vec[mid] == val
      rr = mid-1;
    }
  }
  return fr;
}

int upper_bound(vector<int>& vec, int val) {
  int fr = 0, rr = vec.size()-1;

  while (fr <= rr) {
    int mid = fr + (rr-fr)/2; // (fr + rr)/2 와 논리적으로 같고, 오버플로우를 방지
    if (vec[mid] < val) {
      fr = mid+1;
    } else if (val < vec[mid]) {
      rr = mid-1;
    } else { // vec[mid] == val
      fr = mid+1;
    }
  }
  return fr;
}

/* `vec[mid] == val`일 때를 더 짧게 처리하려면:

int lower_bound(vector<int>& vec, int val) {
  int fr = 0, rr = vec.size()-1;

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

int upper_bound(vector<int>& vec, int val) {
  int fr = 0, rr = vec.size()-1;

  while (fr <= rr) {
    int mid = fr + (rr-fr)/2;
    if (vec[mid] <= val) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr;
}

*/
