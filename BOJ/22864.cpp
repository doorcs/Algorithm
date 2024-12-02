#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C, M;
  cin >> A >> B >> C >> M; // A만큼 쌓이고, B만큼 처리 가능. C만큼 피로도가 줄어들고, 최대 피로도는 M (같아질 수 있음)

  int ans = 0, curr = 0;
  for (int i = 0; i < 24; i++) {
    if (curr + A <= M) ans += B, curr += A;
    else curr = max(0, curr-C); // curr이 음수일 때를 별도로 처리해주는 대신 이렇게 max()로 처리하면, `curr+A <= M`일 때의 연산량이 줄어든다!
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

  int A, B, C, M;
  cin >> A >> B >> C >> M; // A만큼 쌓이고, B만큼 처리 가능. C만큼 피로도가 줄어들고, 최대 피로도는 M (같아질 수 있음)

  int ans = 0, curr = 0;
  for (int i = 0; i < 24; i++) {
    if (curr < 0) curr = 0;

    if (curr + A <= M) ans += B, curr += A;
    else curr -= C;
  }

  cout << ans;
}

*/
