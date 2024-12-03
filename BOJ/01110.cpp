#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, sav, ans = 1;
  cin >> N;
  sav = N;
  N = (N%10)*10 + (N/10 + N%10)%10;

  while (N != sav) {
    N = (N%10)*10 + (N/10 + N%10)%10;
    ans++;
  }

  cout << ans;
}
