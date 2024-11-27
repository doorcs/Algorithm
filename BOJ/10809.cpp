#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  vector<int> vec(26);
  fill(vec.begin(), vec.end(), -1);

  for (size_t i = 0; i < s.size(); i++) {
    if (vec[s[i]-'a'] == -1) vec[s[i]-97] = i;
  }

  for (const auto& it : vec) cout << it << ' ';
}
