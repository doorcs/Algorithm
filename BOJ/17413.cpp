#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  getline(cin, s);

  vector<char> stk;
  bool tag = false;
  for (int i = 0; i < (int)s.size(); i++) {
    if (tag) {
      cout << s[i];
      if (s[i] == '>') tag = false;
      continue;
    }
    if (s[i] == '<') {
      if (stk.size() != 0) {
        for (int i = stk.size()-1; i >= 0; i--) cout << stk[i];
        stk = vector<char>();
      }
      cout << '<';
      tag = true;
      continue;
    }
    if (s[i] == ' ' && stk.size() != 0) {
        for (int i = stk.size()-1; i >= 0; i--) cout << stk[i];
        cout << ' ';
        stk = vector<char>();
    }
    else stk.push_back(s[i]);
  }

  if (stk.size() != 0)
    for (int i = stk.size()-1; i >= 0; i--) cout << stk[i];
}
