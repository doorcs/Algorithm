#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N, M; cin >> N >> M;
  unordered_map<string, int> mp;
  while (N--) {
    string s; cin >> s;
    mp[s]++;
  }

  int ans = 0;
  while (M--) {
    string s; cin >> s;
//  if (mp[s]) ans++; // 이것도 가능
    if (mp.find(s) != mp.end()) ans++; // `.find()` 메소드를 사용하는게 조금 더 빠르다! 알아두기!!!
  }

  cout << ans;
}
