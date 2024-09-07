#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  while (getline(cin, s) && s != "0 0") {
    cout << s[0]-'0' + s[2]-'0' << '\n';
  }
}
