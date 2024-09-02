#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v;
  int N, X;
  cin >> N >> X;
  while (cin >> N) // 변수 N 재활용
    if (N < X) v.push_back(N);

  for (const auto& it : v) cout << it << ' ';
}
