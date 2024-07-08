#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int curr = 0, cnt = 0; // curr을 0으로 초기화해두면 if문 하나로 처리 가능!

  int N; cin >> N;
  for (int i = 0; i < N; i++) {
    int tmp; cin >> tmp;
    if (curr == tmp) {
      curr++, cnt++;
      curr %= 3; // 모듈러 연산을 통해 현재 curr값이 3이라면 0으로 바꿔주기
    }
  }

  cout << cnt;
}

/* 첫 풀이 (생각나는대로..):

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;

  int curr;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int tmp; cin >> tmp;
    if (cnt == 0 && tmp == 0) cnt++, curr = 0;

    if (curr == 2 && tmp == 0) {
      curr = 0, cnt++;
    } else if (tmp - 1 == curr) {
      curr = tmp, cnt++;
    }
  }

  cout << cnt;
}

*/
