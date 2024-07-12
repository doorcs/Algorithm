// 처음 정답을 맞춘 풀이:
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it; // 가능하다면 입력 처리에 범위 기반 for문을 사용하는 습관을 들여보자!

  ll res = 0;
  res += reduce(v.begin(), v.end()) * 2 + 2*N + v[0] + v[N-1]; // `reduce(v.begin(), v.end());` == `accumulate(v.begin(), v.end(), 0);`
  for (int i = 1; i < N; i++) res += abs(v[i] - v[i-1]);

  cout << res;
}

/* 처음 시도했던 방식의 풀이:

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;
  unsigned long long res = 0;

  int prev, next;
  cin >> prev;
  res += 2 + prev*3;
  for (int i = 1; i < N; i++) {
    cin >> next;
    res += abs(next-prev) + next*2 + 2;
    prev = next;
  }
  // res += next;
  res += prev; // `res += next;` 면 `N = 1`일 때를 제대로 처리하지 못한다!

  cout << res;
}

*/
