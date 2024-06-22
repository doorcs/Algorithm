#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;
  vector<string> v;
  while (N--) {
    string s; cin >> s;
    v.push_back(s);
  }

  ran::sort(v, [](string a, string b) {
    if (a.size() == b.size()) {
      return a < b;
    }
    return a.size() < b.size();
  });
  auto [fr, rr] = ran::unique(v);
  v.erase(fr, rr);
  // v.erase(unique(v.begin(), v.end()), v.end());

  for (const auto& it : v) cout << it << '\n';
}
