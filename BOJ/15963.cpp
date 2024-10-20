#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N, M; // `long long`이 아니라 `long`이어도 충분하지만
  cin >> N >> M;
  cout << (N==M);
}

// int형 최댓값 2'147'483'647: 10자리
// 열자리 정수까지 들어올 수 있으므로, 20억을 넘는 수가 들어올 수 있다 <-- int형보다 표현 범위가 큰 자료형 필요!
