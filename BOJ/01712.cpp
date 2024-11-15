#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  cin >> A >> B >> C;

  cout << (C <= B ? -1 : A/(C-B)+1);
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  cin >> A >> B >> C;

  if (B == C) return cout << -1, 0;

  int ans = A/(C-B) + 1;
  cout << (ans < 0 ? -1 : ans);
}

*/
