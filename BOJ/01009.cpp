#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    a %= 10, b %= 4;
    if (!b) b = 4; // b값이 4로 나누어 떨어질 경우, 4로 초기화

    if (a == 0) {
      cout << 10 << '\n'; // 예외 처리 ( 0이 아니라 10을 출력해야함 )
    } else {
      int ans = pow(a, b);
      ans %= 10;
      cout << ans << '\n';
    }
  }
}
// 입력받은 수에서 일의 자리만 필요할 경우, 그냥 입력받은 다음 `%=10` 해주면 된다!
/* 처음 시도한 방식(...):

int a;
string A; cin >> A;
a = A[A.size()-1]-'0';

*/

/* 첫 풀이 (일의자리가 변하는 패턴을 배열에 미리 저장):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int>> vec{
  {0},
  {1},
  {2, 4, 8, 6},
  {3, 9, 7, 1},
  {4, 6},
  {5},
  {6},
  {7, 9, 3, 1},
  {8, 4, 2, 6},
  {9, 1}
};

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    string A;
    int a, b;
    cin >> A >> b;
    a = A[A.size()-1]-'0';

    if (a == 0) cout << 10 << '\n';
    else if (b%vec[a].size() == 0) cout << vec[a][vec[a].size()-1] << '\n'; // b가 패턴의 수로 나누어 떨어질 경우 마지막 원소 출력
    else cout << vec[a][(b%vec[a].size())-1] << '\n';
  }
}

*/

/* 반복문 기반 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;

    int c = 1;
    for (int i = 0; i < b; i++) {
      c*=a;
      c%=10;
    }
 
    if (c == 0) cout << 10 << '\n';
    else cout << c << '\n';
  }
}

*/
