#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> excl = {1,2,4,6,11,20,29}; // 1에서 1000까지의 수들 중, 세 삼각수의 합으로 표현할 수 없는 수는 `단 7개`
  int T; cin >> T;
  while (T--) {
    int K; cin >> K;
    // std::all_of() 활용:
    cout << (all_of(excl.begin(), excl.end(), [K](auto a) { return a != K; }) ? 1 : 0) << '\n';

    // std::any_of() 활용:
    // cout << (any_of(excl.begin(), excl.end(), [K](auto a) { return a == K; }) ? 0 : 1) << '\n';

    // std::none_of() 활용:
    // cout << (none_of(excl.begin(), excl.end(), [K](auto a) { return a == K; }) ? 1 : 0) << '\n';

    // for문과 flag 변수 활용:
    // bool flag = false;
    // for (const auto& it : excl)
    //   if (it == K) flag = true;
    // cout << (flag ? 0 : 1) << '\n';
  }
}

/* 첫 풀이 ( also preprocessing ):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  deque<int> tnum(46);
  for (int i = 1; i < 46; i++) tnum[i] = i*(i+1)/2;
  tnum.pop_front();

  int T; cin >> T;
  while (T--) {
    bool flag = false;
    int K; cin >> K;

    for (const auto& a : tnum)
      for (const auto& b : tnum)
        for (const auto& c : tnum)
          if (a+b+c == K) flag = true;

    cout << (flag ? 1 : 0) << '\n';
  }
}

*/
