#include <iostream>
#include <string>

std::string s =
R"(         ,r'"7
r`-_   ,'  ,/
 \. ". L_r'
   `~\/
      |
      |)"; // (C++11) Raw string literals | 원래 `const char[]` == `const char*` 이므로 std::string에 캐스팅할 수 있음!

int main() { std::cout << s; }

/* Raw string literals 사용 방법:

const char* s = R"({string literals interpreted as is})";


R"( 으로 열고,
)" 으로 닫아준다! escape sequence, whitespace(newline 포함) 등등을 모두 보이는 그대로 해석함.

raw string 안에 `()` 일반 괄호도 넣으려면,

R"a(
a)" 처럼 `"`와 `(`, `)` 사이에 임의의 delimiter를 추가해주면 된다!

*/

/* 처음 푼 코드:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cout << R"(         ,r'"7
r`-_   ,'  ,/
 \. ". L_r'
   `~\/
      |
      |)";
}

*/
