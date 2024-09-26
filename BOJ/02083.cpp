#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while (true) {
    string s;
    int a, w; // age, weight
    cin >> s >> a >> w;
    if (s == "#") return 0;

    cout << s << (a < 18 && w < 80 ? " Junior" : " Senior") << '\n';
    // cout << s << (a < 18 && w < 80 ? " Junior\n" : " Senior\n");
  }
}
