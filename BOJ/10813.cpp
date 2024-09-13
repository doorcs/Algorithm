#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<int> v(N);
  // iota(v.begin(), v.end(), 1); // 8ms (1'000'000 크기 벡터 기준)
  for (int i = 0; i < N; i++) v[i] = i+1; // 3ms (1'000'000 크기 벡터 기준)
  cout << t << '\n';
  while (M--) {
    int i, j;
    cin >> i >> j;
    swap(v[i-1], v[j-1]);
  }
  for (const auto& it : v) cout << it << ' ';
}
