#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void dfs(int lb, int ub, int src, int depth, int& ans) {
  if (src > ub || depth > 9) return;
  if (lb <= src && src <= ub) ans++;

  dfs(lb, ub, src*10+4, depth+1, ans);
  dfs(lb, ub, src*10+7, depth+1, ans);
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  int ans = 0;
  dfs(A, B, 0, 0, ans);

  cout << ans;
} // dfs 기반 풀이, 0ms

/* 첫 풀이 ( 브루트포스, 1884ms ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = A; i < B+1; i++) {
    int curr = i;
    bool flag = true;
    while (curr) {
      int tail = curr%10;
      if (tail != 4 && tail != 7) {
        flag = false;
        break;
      }
      curr/=10;
    }
    if (flag) ans++;
  }

  cout << ans;
}

*//* 첫 시도 ( to_string을 활용한 std::string 변환 풀이, TLE ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = A; i < B+1; i++) {
    string s = to_string(i);
    bool flag = true;
    for (const auto& c : s) {
      if (c != '4' && c != '7') {
        flag = false;
        break;
      }
    }
    if (flag) ans++;
  }

  cout << ans;
}

*/
