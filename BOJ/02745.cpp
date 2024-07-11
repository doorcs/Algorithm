// 첫 풀이:
#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int res = 0;
  string s; cin >> s;
  int N; cin >> N;
  int sz = s.size();

  for (const auto& c : s) {
    if ('A' <= c) {
      res += ((c-55) * pow(N, sz-1));
    } else {
      res += (c-'0') * pow(N, sz-1);
    }
    sz--; // 범위 기반 for문은 왼쪽에서부터 처리되니까
  }

  cout << res;
}


// std::stoi(string, 0, N=10);

// 두 번째 파라미터는 문자열에서 문자를 몇 개 읽어들였는지 저장할 `size_t`타입 포인터! 일반적으론 사용하지 않으므로 두번째 파라미터는 0 고정이라고 기억하기 (엄밀하게는 nullptr)

// C++는 Named Argument를 지원하지 않기 때문에
// stoi(str, base = N); 처럼은 쓸 수 없다. 언젠가 지원해주려나?


/* 사실 단 세 줄로 해결할 수 있던 문제

  string s; int N;
  cin >> s >> N;
  cout << stoi(s, 0, N);

 */

// cout << stoi(s, nullptr, N);
