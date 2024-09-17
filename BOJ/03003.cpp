#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> comp{1, 1, 2, 2, 2, 8};

  vector<int> v(6);
  for (auto& it : v) cin >> it;

  for (int i = 0; i < 6; i++) cout << comp[i]-v[i] << ' ';
}
