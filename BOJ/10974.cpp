#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N);
  int curr = 1;
  for (auto& it : v) it = curr++;

  do {
    for (const auto& it : v) cout << it << ' ';
    cout << '\n';
  } while (next_permutation(v.begin(), v.end())); // 다음 순열이 존재하면 순서를 바꿔준 뒤 true를, 오름차순으로 만들 수 있는 다음 순열이 없을 경우 false를 리턴 ( custom comparator가 없을 때! ) 
}
