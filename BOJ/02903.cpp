#include <bits/stdc++.h>

using namespace std;
using ll = long long;

auto main() -> int {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll N; cin >> N;
  cout << format("{}", pow(pow(2, N)+1, 2)); // (C++20) std::format("{} {:.2f}", val1, val2)
}

// 사실 이 문제에서는 N이 최대 15라 `(int)pow(pow(2, N)+1, 2)` 로 처리할 수 있지만,
// 코테 환경도 조만간 C++20을 지원할테니 std::format() 함수에 익숙해지는게 좋을 것 같다!

/*

``` Python
"val1 is: {:.2f}".format(val1)  # 이런 문자열을 만드려면
```

==

``` C++
std::format("val1 is: {:.2f}", val1) // 이런식으로 std::format() 함수를 활용하면 된다
```

*/
