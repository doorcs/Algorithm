#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 2; i*i <= N; i++) {
    while (N%i == 0) {
      cout << i << '\n';
      N /= i;
    }
  }
  if (N > 1) cout << N;
}

/* 첫 풀이: (20ms)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 2; i <= N; i++) {
    while (N != 1 && (N/i)*i == N) {
      cout << i << '\n';
      N /= i;
    }
  }
}

*/
