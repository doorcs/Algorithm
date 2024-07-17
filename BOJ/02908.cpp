#include <bits/stdc++.h>

using ll = long long;
using namespace std;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string A, B;
  cin >> A >> B;
  ran::reverse(A); ran::reverse(B); // reverse(A.begin(), A.end()); reverse(B.begin(), B.end());

  cout << (stoi(A) > stoi(B) ? A : B);
}
