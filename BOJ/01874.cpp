#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> stk;
  string ans;
  int i = 1;

  while (N--) {
    int curr; cin >> curr;

    while (i <= curr) {
      stk.push_back(i++);
      ans += "+\n";
    }

    if (curr == stk.back()) {
      stk.pop_back();
      ans += "-\n";
    } else {
      return cout << "NO", 0;
    }
  }

  cout << ans;
} // 8ms

/* 첫 풀이 (20ms):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> stk;
  vector<char> ans;
  int i = 1;

  while (N--) {
    int curr; cin >> curr;

    while (i <= curr) {
      stk.push_back(i++);
      ans.push_back('+');
    }

    if (curr == stk.back()) {
      stk.pop_back();
      ans.push_back('-');
    } else {
      return cout << "NO", 0;
    }
  }

  for (char it : ans) cout << it << '\n';
}

*/
