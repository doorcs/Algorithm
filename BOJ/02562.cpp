include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int ans, max = 0;
  for (int i = 0; i < 9; i++) {
    int tmp; cin >> tmp;
    if (tmp > max) {
      max = tmp;
      ans = i+1;
    }
  }
  cout << max << '\n' << ans;
}
