#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, T, P;
  vector<double> v(6);
  cin >> N;
  for (auto& it : v) cin >> it;
  cin >> T >> P;

  int shirts = 0;
  for (const auto& it : v) shirts += ceil(it/T);
  // for (const auto& it : v) shirts += (it+T-1)/T;

  cout << shirts << '\n' << N/P << ' ' << N%P;
}
