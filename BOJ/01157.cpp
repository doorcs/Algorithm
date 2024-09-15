#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  unordered_map<char, int> mp;

  int cnt = 0;
  for (const auto& it : s) { // 개선된 로직 (20ms)
    if (it >= 97) {
      if (++mp[it-32] > cnt) cnt = mp[it-32]; // using prefix increment operator `++` to reduce statements
    } else {
      if (++mp[it] > cnt) cnt = mp[it];
    }
  }

  char ans = 0;
  for (const auto& [k, v] : mp) {
    if (cnt == v) {
      if (ans) {
        ans = '?';
        break;
      }
      ans = k;
    }
  }
  cout << ans;
}

/* 처음 떠올린 로직 (28ms)

  for (const auto& it : s) {
    if (it >= 97) {
      mp[it-32]++;
      if (mp[it-32] > cnt) cnt = mp[it-32];
    } else {
      mp[it]++;
      if (mp[it] > cnt) cnt = mp[it];
    }
  }

*/
