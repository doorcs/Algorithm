#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  unordered_map<int, int> mp;
  int tmp;
  while (cin >> tmp) mp[tmp]++;
  for (int i = 1; i <= 30; i++)
    if (mp.find(i) == mp.end()) cout << i << '\n';
}
