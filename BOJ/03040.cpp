#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v(9), idx = {0, 0, 1, 1, 1, 1, 1, 1, 1}; // std::next_permutation()을 활용해서 `모든` 조합을 구하려면 인덱스들을 오름차순으로 배치해야한다!!! (0 먼저, 1을 나중에)
  for (auto& it : v) cin >> it;

  do {
    int sum = 0;
    for (int i = 0; i < 9; i++)
      if (idx[i]) sum += v[i];

    if (sum == 100) {
      for (int i = 0; i < 9; i++)
        if (idx[i]) cout << v[i] << '\n';
      return 0;
    }
  } while (next_permutation(idx.begin(), idx.end()));
}
