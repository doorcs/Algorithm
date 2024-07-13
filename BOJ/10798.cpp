#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  for (size_t i = 0; i < 15; i++) {
    if (i < A.size()) cout << A[i];
    if (i < B.size()) cout << B[i];
    if (i < C.size()) cout << C[i];
    if (i < D.size()) cout << D[i];
    if (i < E.size()) cout << E[i]; // 문자열 길이가 다를 수 있어서 다른 방법이 안 떠오르는데, `std::string`을 더 깔끔하게 다루는 방법이 없을까?
  }
}

/* char 배열을 활용하는 풀이:

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

char arr[5][20]; // 전역으로 두면 0으로 초기화

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  for (int i = 0; i < 5; i++) cin >> arr[i];

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[j][i]) cout << arr[j][i];
    }
  }
}

*/
