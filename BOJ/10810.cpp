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
  while (M--) {
    int i, j, k;
    cin >> i >> j >> k;
    for (int it = i-1; it < j; it++) { // using another variable `it`
      v[it] = k;
    }
  }
  for (const auto& it : v) cout << it << ' ';
}

// 그냥 벡터를 N+1 크기로 할당받으면 풀이가 좀 더 단순해질듯

// vector<int> v(N+1);
// for (; i <= j; i++) v[i] = k;
// for (int i = 1; i <= N; i++) cout << v[i] << ' ';

/* 첫 풀이:

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
  while (M--) {
    int i, j, k;
    cin >> i >> j >> k;
    for (i--; i < j; i++) { // using initialization statement
      v[i] = k;
    }
  }
  for (const auto& it : v) cout << it << ' ';
}

*/
