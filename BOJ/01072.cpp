#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll calc(ll games, ll wins) {
  return 100*wins/games;
}

ll upper_bound(ll wr, ll games, ll wins) { // 추가로 이겨야 하는 게임 수를 구하기 위해 upper_bound 사용
  ll fr = 0, rr = 1e9; // 게임 수는 10억회 이하
  while (fr <= rr) {
    ll mid = fr + (rr-fr)/2;
    if (calc(games+mid, wins+mid) <= wr) { // 새로 계산된 승률이 현재 승률보다 작거나 같을 경우 앞쪽 포인터를 뒤로 밀어줌
      fr = mid+1;
    } else { // 새로 계산된 승률이 현재 승률보다 클 경우 뒤쪽 포인터를 앞으로 당겨줌
      rr = mid-1;
    }
  }
  return fr;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll X, Y;
  cin >> X >> Y;

  ll Z = calc(X, Y); // 현재 승률
  if (Z >= 99) {
    cout << -1;
    return 0;
  }

  cout << upper_bound(Z, X, Y);
}
