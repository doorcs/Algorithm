#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
  cin >> s;
  for (auto& c : s) {
    if (c == 'I') c = 'i';
    else c = 'L';
  }
  cout << s;
}
