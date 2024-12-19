#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int len; cin >> len;
  vector<int> v(len+1);
  for (int i = 1; i <= len; i++) cin >> v[i];

  int n; cin >> n;
  while (n--) {
    int sex, num;
    cin >> sex >> num;
    if (sex == 1) {
      for (int i = num; i <= len; i += num) v[i] ^= 1; // for문의 증감식 부분에는 `++`, `--` 말고 다른것들도 넣을 수 있다!!
    } else { // sex == 2
      v[num] ^= 1;
      int fr = num-1, rr = num+1;
      while (fr > 0 && rr <= len) {
        if (v[fr] == v[rr]) {
          v[fr] ^= 1, v[rr] ^= 1;
          fr--, rr++;
        } else break; // 더 이상 대칭이 아닐 경우 break
      }
    }
  }

  for (int i = 1; i <= len; i++) {
    cout << v[i] << ' ';
    if (i % 20 == 0) cout << '\n';
  }
}
