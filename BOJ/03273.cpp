#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> v(n); // n개의 서로 다른 양의 정수!
  for (auto& it : v) cin >> it;
  sort(v.begin(), v.end());

  int x; cin >> x;
  int fr = 0, rr = n-1, ans = 0;
  while (fr < rr) {
    int mid = v[fr] + v[rr];
    if (mid < x) {
      fr++;
    } else if (x < mid) {
      rr--;
    } else {
      ans++, fr++;
    }
  }

  cout << ans;
}
