#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<pair<string, pair<int, int>>> v(N);
  for (auto& [str, val] : v) cin >> str >> val.first >> val.second; // 범위기반 for문 활용 입력 처리

  int ans = 0;
  for (int i = 123; i < 988; i++) {
    string curr = to_string(i);

    if (curr[0] == curr[1] || curr[1] == curr[2] || curr[2] == curr[0] ||
    curr[0] == '0' || curr[1] == '0' || curr[2] == '0') continue;

    bool flag = true;
    for (const auto& it : v) {
      string comp = it.first;
      int s = 0, b = 0;
      for (int i = 0; i < 3; i++) {
        if (comp[i] == curr[i]) {
          s++;
          continue; // strike일 경우 ball 확인은 스킵
        }

        for (int j = 0; j < 3; j++) {
          if (i != j && curr[i] == comp[j]) b++; // 인덱스가 다른데 값이 같을 경우 ball. map 없이도 풀 수 있다!!
        }
      }

      if (it.second != make_pair(s, b)) {
        flag = false;
        break;
      }
    }
    if (flag) ans++;
  }
  cout << ans;
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<pair<string, pair<int, int>>> v;
  int N; cin >> N;
  while (N--) {
    string val;
    int s, b;
    cin >> val >> s >> b;
    v.push_back({val, {s, b}});
  }

  int ans = 0;
  for (int i = 123; i < 988; i++) {
    string curr = to_string(i);

    if (curr[0] == curr[1] || curr[1] == curr[2] || curr[2] == curr[0] ||
    curr[0] == '0' || curr[1] == '0' || curr[2] == '0') continue;

    bool flag = true;
    for (const auto& it : v) {
      // if (!flag) break; << 이 줄을 넣어주면 0ms
      string comp = it.first;
      int s = 0, b = 0;

      map<char, int> chk;
      for (int i = 0; i < 3; i++) {
        if (comp[i] == curr[i]) s++;
        else {
          chk[comp[i]]++;
        }
      }
      for (int i = 0; i < 3; i++) {
        if (chk[curr[i]]) b++;
      }

      if (it.second != make_pair(s, b)) flag = false;
    }
    if (flag) ans++;
  }
  cout << ans;
}

*/
