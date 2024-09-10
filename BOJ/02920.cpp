#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v(8);
  for (auto& it : v) cin >> it; // for (int& it : v) cin >> it;

  bool asc = false, desc = false;
  for (int i = 1; i < 8; i++) {
    if (v[i-1] < v[i]) asc = true;
    else desc = true;
  }

  if (asc && desc) {
    cout << "mixed";
  } else if (asc) {
    cout << "ascending";
  } else { // desc
    cout << "descending";
  }
}

/* 컨테이너 동등성 체크 (조건이 굉장히 간단하기 때문에 가능한 풀이)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> asc{1, 2, 3, 4, 5, 6, 7, 8}, dsc{8, 7, 6, 5, 4, 3, 2, 1}, in(8);
  for (auto& it : in) cin >> it;

  if (in == asc) {
    cout << "ascending";
  } else if (in == dsc) {
    cout << "descending";
  } else {
    cout << "mixed";
  }
}

*/

