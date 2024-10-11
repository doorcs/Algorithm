#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M, N;
  cin >> M >> N;

  vector<bool> sieve(N+1, true);
  sieve[1] = false;
  for (int i = 2; i*i <= N; i++) {
    if (sieve[i]) {
      for (int j = i*i; j <= N; j += i) sieve[j] = false;
    }
  }
  
  vector<int> v;
  for (int i = M; i <= N; i++) {
    if (sieve[i]) v.push_back(i);
  }

  if (v.empty()) return cout << -1, 0;
  cout << reduce(v.begin(), v.end()) << '\n' << v[0];
}
