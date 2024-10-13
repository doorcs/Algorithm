#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> coins{500, 100, 50, 10, 5, 1};
  int n;
  cin >> n;
  int change = 1000 - n, cnt = 0;
  for (const auto& it : coins) {
    cnt += change/it;
    change %= it;
  }
  cout << cnt;
}
