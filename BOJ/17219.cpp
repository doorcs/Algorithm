#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  unordered_map<string, string> mp;
  for (int i = 0; i < N; i++) { // for문 사용 풀이 (100ms)
    string site, pw;
    cin >> site >> pw;
    mp[site] = pw;
  }
  for (int i = 0; i < M; i++) {
    string qry; cin >> qry;
    cout << mp[qry] << '\n';
  }
}

/* for문 대신 while문 사용 (112ms)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  unordered_map<string, string> mp;
  while (N--) {
    string site, pw;
    cin >> site >> pw;
    mp[site] = pw;
  }
  while (M--) {
    string qry; cin >> qry;
    cout << mp[qry] << '\n';
  }
}

*//* unordered_map 대신 map 사용 (236ms)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  map<string, string> mp;
  while (N--) {
    string site, pw;
    cin >> site >> pw;
    mp[site] = pw;
  }
  while (M--) {
    string qry; cin >> qry;
    cout << mp[qry] << '\n';
  }
}

*/
