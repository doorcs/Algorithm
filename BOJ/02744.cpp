#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  for (auto& c : s) {
    if (c >= 97) c -= 32; // 'A' == 65, 'a' == 97
    else c += 32;
  }
  cout << s;
}
