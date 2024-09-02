#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lb(vector<int>& vec, ll val) {
  ll fr = 0, rr = vec.size()-1;
  while (fr <= rr) {
    ll mid = fr + (rr-fr)/2;
    if (vec[mid] < val) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;
  vector<int> sav(v.begin(), v.end());
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  for (const auto& it : sav) cout << lb(v, it) << ' ';
  // for (const auto& it : sav) cout << std::lower_bound(v.begin(), v.end(), it) - v.begin() << ' ';
}

/* line 28 && 29:
ranges::sort(v);
auto [fr, rr] = ranges::unique(v);
v.erase(fr, rr);
*/
