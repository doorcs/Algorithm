#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  for (auto& it : v) cin >> it;

  int l = 0, r = 0, currmax = 0;
  for (int i = 0; i < N; i++) {
    if (v[i] > currmax) l++, currmax = v[i];
  }
  currmax = 0;
  for (int i = N-1; i >= 0; i--) { // 배열의 첫번째 원소 인덱스는 0이므로, 역방향으로 갈땐 0을 포함시켜줘야함!
    if (v[i] > currmax) r++, currmax = v[i];
  }

  cout << l << '\n' << r;
}
