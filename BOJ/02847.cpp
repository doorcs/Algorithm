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
  reverse(v.begin(), v.end());

  ll ans = 0;
  for (int i = 1; i < N; i++) {
    while (v[i] >= v[i-1]) v[i]--, ans++;
    if (v[i] >= v[i-1]) {
      ans += v[i]-v[i-1]+1; // while문보다 조금 더 효율적인 방식!
      v[i] = v[i-1]-1;
    }
  }

  cout << ans;
}

/* 첫 풀이 (while문 사용) :

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
  reverse(v.begin(), v.end());

  ll ans = 0;
  for (int i = 1; i < N; i++) {
    while (v[i] >= v[i-1]) v[i]--, ans++;
  }

  cout << ans;
}

*/
