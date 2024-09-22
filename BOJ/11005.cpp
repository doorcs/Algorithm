#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, B;
  string s;
  cin >> N >> B;
  while (N) { // while (N > 0)
    int mod = N%B;
    N /= B;
    if (mod < 10) {
      mod += '0'; // '0' == 48
    } else {
      mod += 'A'-10; // 'A' == 65
    }
    s = (char)mod + s; // char + string, string + char도 가능!
  }
  cout << s;
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, B;
  string s;
  cin >> N >> B;
  while (N > 0) {
    int mod = N%B;
    N /= B;
    if (mod < 10) {
      s += mod+'0';
    } else {
      s += mod+'A'-10;
    }
  }
  for (auto it = s.rbegin(); it != s.rend(); it++) cout << *it;
}

*/
