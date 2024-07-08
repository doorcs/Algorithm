#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int arr[104][104];
unordered_map<int, pair<int, int>> mp;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int maximum = 0; // 더 좋은 변수명이 없을까? `cond`? std::max()를 안 쓰는 상황이어도 max라는 변수명을 안 쓰는 습관을 들이는게 좋을 것 같은데

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int tmp; cin >> tmp;
      arr[i][j] = tmp;
      if (tmp > maximum) {
        maximum = tmp;
        mp[maximum] = {i, j};
      }
    }
  }

  cout << maximum << '\n' << mp[maximum].first+1 << ' ' << mp[maximum].second+1;
}

/* 처음 제출했던 오답 코드 (입력값 81개가 모두 0일 때, {1, 1}이 아니라 {0, 0}을 출력함):

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int arr[104][104];
unordered_map<int, pair<int, int>> mp;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int maximum = 0;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int tmp; cin >> tmp;
      arr[i][j] = tmp;
      if (tmp > maximum) {
        maximum = tmp;
        mp[maximum] = {i+1, j+1};
      }
    }
  }

  cout << maximum << '\n' << mp[maximum].first << ' ' << mp[maximum].second;
}

*/
