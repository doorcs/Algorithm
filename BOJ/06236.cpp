#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool helper(const vector<int>& v, int M, int budget) {
  int curr = budget, cnt = 1;
  for (const auto& it : v) {
    if (curr < it) {
      cnt++;
      curr = budget - it;
    } else {
      curr -= it;
    }
  }
  return cnt <= M; // 예산 조건을 만족하면 true 리턴
} 

int calc(const vector<int>& v, int M) { // 이분탐색 기반!
  int fr = *max_element(v.begin(), v.end()), rr = reduce(v.begin(), v.end()); // `fr`를 가능한 일일 최대 
  while (fr <= rr) {
    int mid = fr + (rr - fr) / 2;
    if (helper(v, M, mid)) { // * 파라미터에 `mid`를 넣어야 한다!! *
      rr = mid - 1; // 이분탐색을 더 작은 예산으로 수행
    } else {
      fr = mid + 1; // 예산을 키워서 다시 시도
    }
  }
  return fr;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<int> v(N);
  for (auto& it : v) cin >> it;

  cout << calc(v, M);
}
