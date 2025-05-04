#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  int ans = 0, curr = 0, sign = 1;

  s += "="; // 입력의 끝을 나타내는 구분자를 추가해 처리하는 아이디어 기억하기!
  for (char c : s) {
    if (c == '+' || c == '-' || c == '=') {
      ans += sign * curr;
      curr = 0;
      if (c == '-') sign = -1; // 첫번째로 등장하는 `-` 기호 이후로는 전부 음수로 처리 가능!
    } else {
      curr = curr*10 + c-'0';
    }
  }

  cout << ans;
}

/* 그나마 봐줄만한 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  int ans = 0, curr = 0;
  bool flag = false; // '-'기호 등장 여부를 기록하는 플래그

  for (char c : s) {
    switch (c) {
      case '+':
        if (flag) ans -= curr;
        else ans += curr;
        curr = 0;
        break;
      case '-':
        if (flag) ans -= curr;
        else ans += curr;
        flag = true;
        curr = 0;
        break;
      default:
        curr = curr*10 + c-'0';
    }
  }
  if (flag) ans -= curr;
  else ans += curr;

  cout << ans;
}

*/

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
  int idx = -1;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '-') {
      idx = i;
      break;
    }
  }

  for (int i = 0; i < s.size(); i++)
    if (s[i] == '-' || s[i] == '+')
      s[i] = ' ';

  string fr = s.substr(0, idx);

  int s1 = 0, s2 = 0, curr;
  stringstream ss1(fr);
  while (ss1 >> curr) s1 += curr;
  if (idx == -1) return cout << s1, 0;

  string rr = s.substr(idx);
  stringstream ss2(rr);
  while (ss2 >> curr) s2 += curr;

  cout << s1 - s2; // 너무 구린 풀이인데, 다른 방법이 없을까?
}

*/
