#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  map<string, int> mp;

  int cnt = 0;
  while (N--) {
    string s; cin >> s;
    cnt = max(++mp[s], cnt); // 이렇게 하면 map 전체를 순회하지 않아도 최빈값의 등장 횟수를 찾을 수 있다!!
  }

  for (const auto& [k, v] : mp) {
    if (v == cnt) {
      cout << k;
      break; // return 0;
    }
  }
}

/* 첫 풀이 ( cnt 값을 조금 비효율적으로 계산 ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  map<string, int> mp;

  for (int i = 0; i < N; i++) {
    string s; cin >> s;
    mp[s]++;
  }

  int cnt = 0;
  string ans;
  for (const auto& [k, v]: mp) {
    if (v > cnt) cnt = v, ans = k; // map은 `operator<`를 활용해 key값의 오름차순으로 원소들을 정렬해둔다!
  }

  cout << ans;
}

*/
