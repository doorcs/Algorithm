#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string s; cin >> s;
  int cnt = 0;

  int sz = s.size();
  for (int i = 0; i < sz; i++) {
    if (s[i] == 'c' && i+1 < sz && (s[i+1] == '=' || s[i+1] == '-')) {
      cnt++;
    // } else if (s[i] == 'd' && i+1 < sz && (s[i+1] == '-' || i+2 < sz && s[i+1] == 'z' && s[i+2] == '=')) { // 처음 쓴 코드
    } else if (s[i] == 'd' && i+1 < sz && ((s[i+1] == '-') || (i+2 < sz && s[i+1] == 'z' && s[i+2] == '='))) {
      cnt++;
    } else if (s[i] == 'l' && i+1 < sz && s[i+1] == 'j') {
      cnt++;
    } else if (s[i] == 'n' && i+1 < sz && s[i+1] == 'j') {
      cnt++;
    } else if (s[i] == 's' && i+1 < sz && s[i+1] == '=') {
      cnt++;
    } else if (s[i] == 'z' && i+1 < sz && s[i+1] == '=') {
      cnt++;
    }
  }

  cout << sz - cnt; // 전체 문자열의 길이 - 중복으로 카운팅 된 문자의 수
}


/* 
 * short circuit evaluation을 고려해서, 현재 글자가 'd'이고 `현재 인덱스+1`값이 sz보다 작을 경우
 *   1. `다음 번 인덱스`의 글자가 '-'이거나
 *   2. `현재 인덱스+2` 값이 sz보다 작으면서, `다음 번 인덱스`의 글자는 'z'이고, `다다음번 인덱스`의 글자는 '='일 경우
 * cnt를 증가시킬 생각이었고, 앞쪽 조건을 만족하지 않으면 거기서 평가가 끝나기 때문에 문제가 없을 거라고 생각했다.
 * 로컬에서 `-Wall` 플래그 때문에 경고가 뜨긴 하는데 제출 결과가 `맞았습니다`여서 그냥 넘어갈까 생각했었는데,
 *
 * 알고보니 `&&`(논리 and) 연산자의 연산자 우선순위가 `||`(논리 or) 연산자보다 위였다!!
 * `||` 연산자 좌우는 괄호로 감싸주는 습관을 들이자!
 */
