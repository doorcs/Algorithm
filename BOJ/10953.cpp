#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int rep; cin >> rep;
  while (rep--) {
    string s; cin >> s; // 크기가 3으로 고정 ( 1 <= A, B <= 9 )
    cout << stoi(s.substr(0, 1)) + stoi(s.substr(2)) << '\n';
  }
}
