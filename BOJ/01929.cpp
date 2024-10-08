#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M, N;
  cin >> M >> N;

  vector<bool> sieve(N+1, true); // 일단 true로 채우고, 소수가 아니면 false로 바꾸는게 좀 더 semantic한듯!
  sieve[1] = false;
  for (int i = 2; i*i <= N; i++) {
    if (sieve[i]) {
      for (int j = i*i; j <= N; j += i) sieve[j] = false;
    }
  }

  for (int i = M; i <= N; i++)
    if (sieve[i]) cout << i << '\n';
}

/* 처음 작성한 코드 (중괄호 없이 indentation만):

vector<bool> sieve(N+1, true);
sieve[1] = false;
for (int i = 2; i*i <= N; i++)
  if (sieve[i])
    for (int j = i*i; j <= N; j += i) sieve[j] = false;

*/
