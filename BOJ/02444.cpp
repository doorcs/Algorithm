#include <iostream>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N-i; j++) cout << ' ';
    for (int j = 0; j < 2*i-1; j++) cout << '*';
    cout << '\n';
  }
  for (int i = N-1; i >= 0; i--) {
    for (int j = 0; j < N-i-1; j++) cout << ' ';
    for (int j = 0; j < 2*i+1; j++) cout << '*';
    cout << '\n';
  }
}

/* 첫 풀이:

#include <iostream>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N-i; j++) cout << ' ';
    for (int j = 0; j < 2*i-1; j++) cout << '*';
    cout << '\n';
  }
  for (int i = N; i < 2*N; i++) {
    for (int j = 0; j < i-N; j++) cout << ' ';
    for (int j = 0; j < 4*N-2*i-1; j++) cout << '*';
    cout << '\n';
  }
}

*/
