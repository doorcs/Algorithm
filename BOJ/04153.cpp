#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while (true) {
    int a, b, c;
    cin >> a >> b >> c;

    if (!a) break; // a, b, c는 모두 30,000 이하의 양의 정수이고, 입력의 끝에는 `0 0 0`이 오므로

    ll A = a*a, B = b*b, C = c*c; // 사실 int형으로도 충분하지만..
    if (A+B==C || B+C==A || A+C==B) {
      cout << "right\n";
    } else {
      cout << "wrong\n";
    }
  }
}

/* C-style I/O 활용 풀이 ( 908 KB 절약 )

#include <cstdio>

using namespace std;
using ll = long long;

int main() {
  while (true) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // cin >> a >> b >> c;

    if (!a) break;

    ll A = a*a, B = b*b, C = c*c;
    

    if (A+B==C || B+C==A || A+C==B) {
      printf("right\n"); // cout << "right\n";
    } else {
      printf("wrong\n"); // cout << "wrong\n";
    }
  }
}

*/

/* 첫 풀이 - 굳이 입력 처리에 getline()을 사용할 필요가 없었음!

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  while (getline(cin, s) && s != "0 0 0") {
    int a, b, c;
    stringstream ss(s);
    ss >> a >> b >> c;

    ll A = a*a, B = b*b, C = c*c; // 사실 int형으로도 충분하지만..
    if (A+B==C || B+C==A || A+C==B) cout << "right\n";
    else cout << "wrong\n";
  }
}

*/
