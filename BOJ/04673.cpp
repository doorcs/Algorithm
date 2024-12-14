#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<bool> v(10001, true);

  for (int i = 1; i < 10001; i++) {
    int curr = i, sum = i;
    while (curr) {
      sum += curr%10;
      curr /= 10;
    }

    if (sum < 10001) v[sum] = false; // if문이 없어도 맞출 수 있지만, 벡터 범위를 벗어난 접근이 발생한다! (Undefined Behavior)
  }

  for (int i = 1; i < 10001; i++)
    if (v[i]) cout << i << '\n';
}

/* 이렇게 짜는게 코드의 흐름을 이해하기 더 쉬우려나?

  for (int i = 1; i < 10001; i++) {
    int curr = i, sum = 0; // 일단 0으로 초기화하고
    sum += curr; // curr을 더해준 다음
    while (curr) { // curr의 각 자릿수를 더해주기
      sum += curr%10;
      curr /= 10;
    }

    if (sum < 10001) v[sum] = false;
  }

*/
