#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<int, int> p1{
  {1, 500}, {3, 300}, {6, 200},
  {10, 50}, {15, 30}, {21, 10}
  }, p2{
  {1, 512}, {3, 256}, {7, 128},
  {15, 64}, {31, 32}
  };

// 1. std::unordered_map은 요소들의 순서를 보장하지 않기 때문에, 반복 순서를 예측할 수 없다 ( 그래서 unordered_map을 쓰면 틀린다! )
// 2. std::map은 [key, val]에서 `key`의 `operator<`를 활용해 요소들을 key의 오름차순으로 정렬해둔다
/* 3. std::vector를 쓸 수도 있음:
vector<pair<int, int>> p1{
  {1, 500}, {3, 300}, {6, 200},
  {10, 50}, {15, 30}, {21, 10}
  }, p2{
  {1, 512}, {3, 256}, {7, 128},
  {15, 64}, {31, 32}
  };
*/

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    int curr = 0;
    for (const auto& [k, v] : p1) {
      if (a <= k) {
        if (a) curr += v; // a가 0일때는 그냥 break
        break;
      }
    }
    for (const auto& [k, v] : p2) {
      if (!b) break; // 위 방식도 좋지만, 빨리 짤 수 있는 방식을 우선시하자
      if (b <= k) {
        curr += v; 
        break;
      }
    }
    cout << curr*10000 << '\n';
  }
}
