#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<string, int> mp; // std::map<key, val>은 `operator<`를 활용해 key값의 오름차순으로 요소들을 정렬!
  string name;
  double tot = 0; // for문에서 매번 casting 하는 대신, divisor를 floating point numeric type으로
  while (getline(cin, name)) mp[name]++, tot++;

  cout << fixed << setprecision(4);
  for (const auto& [k, v] : mp) cout << k << ' ' << v/tot*100 << '\n';
}
