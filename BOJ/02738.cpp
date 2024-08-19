#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<vector<int>> v(N, vector<int>(M)); // <-

  for (auto& cols : v) {
    for (auto& elem : cols) cin >> elem;
  }

  for (const auto& cols : v) {
    for (const auto& elem : cols) {
      int tmp; cin >> tmp;
      cout << tmp + elem << ' ';
    }
    cout << '\n';
  }
}

// -> vector<vector<int>> v(N, vector<int>(M, 0)); 과 같다 | std::vector<T>(size_t count, T& value=T());
