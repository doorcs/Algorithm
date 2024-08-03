#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  while (N--) {
    int rep; string s;
    cin >> rep >> s;

    for (const auto& it : s) {
      for (int i = 0; i < rep; i++) cout << it;
    }

    cout << '\n';
  }
}
