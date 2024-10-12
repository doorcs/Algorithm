#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<bool> sieve(123'456*2 + 1, true); // 가능한 n값이 123,456 이하이므로, `2n-1`크기의 sieve 필요!
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
