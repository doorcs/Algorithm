#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 1; i < N+1; i++) { // == `i <= N`
    int A, B;
    cin >> A >> B;
    cout << "Case #" << i << ": " << A+B << '\n';
  }
}
