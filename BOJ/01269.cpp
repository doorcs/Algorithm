#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;
  vector<int> v1(A), v2(B);
  unordered_map<int, int> mp;

  for (auto& it : v1) {
    cin >> it;
    mp[it]++;
  }
  for (auto& it : v2) {
    cin >> it;
    mp[it]++;
  }

  int res = 0;
  for (const auto it : v1)
    if (mp[it] == 1) res++;
  for (const auto it : v2)
    if (mp[it] == 1) res++;

  cout << res;
}

/* 이렇게 쓰는게 더 보기 좋은가? 아직 잘 모르겠다

for (const auto it : v1) if (mp[it] == 1) res++;
for (const auto it : v2) if (mp[it] == 1) res++;

*/
