#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N; cin >> N; // int형을 쓰면 오버플로우 때문에 틀린다! `1e9 * 4`는 2'147'483'647을 넘기 때문
  cout << (N<<2); // 괄호가 빠지면 N을 출력한 다음 2를 출력하기 때문에 틀린다!
}

// cout << 4 * N;
