#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void func(int n, int src, int dst, int mid=0) {
  if (n == 1) {
    cout << src << ' ' << dst << '\n';
    return;
  } else {
    func(n-1, src, mid, dst);
    func(1, src, dst); // 파라미터 기본값으로 처리
    func(n-1, mid, dst, src);
  }
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  // 큰 수 처리 필요!
  // 1안: pow()와 to_string() 활용
  string s = to_string(pow(2, N));
  s = s.substr(0, s.find_first_of('.'));
  for (ll i = 0; i < s.size(); i++) {
    if (i == s.size()-1) cout << s[i]-'1';
    else cout << s[i];
  }
  //
  cout << '\n';
  if (N > 20) return 0;
  func(N, 1, 3, 2);
}

/* 2안: `__int128_t` 사용 (g++)

  __int128_t a = (__int128_t)1<<N; // 1을 N번 왼쪽으로 시프트 == 2의 N승
  a--;
  string s;
  while(a) s += '0'+a%10, a/=10;
  reverse(s.begin(),s.end());
  cout << s; // 여기서는 값이 양수임이 보장되기 때문에 간단하게 처리 가능하지만..

*/
