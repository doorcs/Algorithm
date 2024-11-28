#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int ans = 0;

  for (int i = 0; i < 8; i++) {
    string s; cin >> s;
    for (int j = 0; j < 8; j++) {
      if (!((i+j)&1) && s[j] == 'F') ans++; // i와 j를 같이 처리할 수 있다!
    }
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

  int ans = 0;

  for (int i = 0; i < 8; i++) {
    string s; cin >> s;
    for (int j = 0; j < 8; j++) {
      if (i&1 && j&1 && s[j] == 'F') ans++;
      if (!(i&1) && !(j&1) && s[j] == 'F') ans++;
    }
  }

  cout << ans;
}

*/
