#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  int ans = 1, tmp = K;
  while (K--) {
    ans*=N;
    N--;
  }
  while (tmp) {
    ans/=tmp;
    tmp--;
  }

  cout << ans;
}
