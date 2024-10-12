// 12ms, 첫 풀이 && 벡터 활용 풀이 (메모리 2172KB)
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<bool> sieve(123'456*2 + 1, true); // 가능한 n값이 123,456 이하이므로, `2n-1`크기의 sieve 필요!

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // vector<bool> sieve(123'456*2 + 1, true); (C++20 기준) 어차피 벡터의 생성자는 런타임에 동작하므로 사실 여기에 둬도 상관없지만, 아래 풀이와 유사한 구조를 위해
  sieve[1] = false;
  for (int i = 2; i*i <= 123'456*2 + 1; i++) {
    if (sieve[i]) {
      for (int j = i*i; j < 123'456*2 + 1; j += i) sieve[j] = false;
    }
  }

  int n;
  while (cin >> n && n) { // n이 0이면 while문 종료
    int cnt = 0;
    for (int i = n+1; i <= 2*n; i++)
      if (sieve[i]) cnt++;
    cout << cnt << '\n';
  }
}

--------------------------------------------------------------------------------

// 4ms, 정적 배열 활용 풀이 (메모리 2260KB) - 메모리 사용량은 벡터 사용시보다 조금 더 크다
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool sieve[123'456*2 + 1]; // 전역이므로 false fill

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // 전처리
  sieve[1] = true;
  for (int i = 2; i*i <= 123'456*2 + 1; i++) {
    if (!sieve[i]) {
      for (int j = i*i; j <= 123'456*2 + 1; j += i) sieve[j] = true;
    }
  }

  int n;
  while (cin >> n && n) { // n이 0이면 while문 종료
    int cnt = 0;
    for (int i = n+1; i <= 2*n; i++)
      if (!sieve[i]) cnt++;
    cout << cnt << '\n';
  }
}
