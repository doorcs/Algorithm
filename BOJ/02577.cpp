#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  cin >> A >> B >> C;

  ll mul = A*B*C; // A, B, C <= 1000이기 때문에 int로도 충분하지만
  string s = to_string(mul); // to_string(A*B*C)
  vector<int> v(10);

  for (const auto& it : s) v[it-'0']++;

  for (const auto& it : v) cout << it << '\n';
  // for (int i = 0; i < 10; i++) cout << v[i] << '\n';< '\n';
}
