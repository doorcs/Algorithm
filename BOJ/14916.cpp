#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  // 동전의 개수를 최소로. 5원과 2원
  int ans = 0;
  while (n%5 != 0 && n > 0) { // 5로 나누어 떨어질때까지만 2를 빼주면 된다!!
    n -= 2;
    ans++;
  }

  if (n < 0) {
    cout << -1;
  } else {
    cout << ans + n/5; // 2로 나누어 떨어지는 경우도 함께 처리할 수 있다
  }
}

/* 첫 풀이 (if문):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  // 동전의 개수를 최소로. 5원과 2원
  if (n%5 == 0) {
    cout << n/5;
  } else if (n%5 == 4) {
    cout << n/5+2;
  } else if (n%5 == 3) {
    if (n%5+5 <= n) {
      cout << n/5-1 + 4;
    } else {
      cout << -1;
    }
  } else if (n%5 == 2) {
    cout << n/5+1;
  } else if (n%5 == 1) {
    if (n%5+5 <= n) {
      cout << n/5-1 + 3;
    } else {
      cout << -1;
    }
  }
}

*/
