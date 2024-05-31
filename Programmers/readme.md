## 메인 함수를 통으로 짜는게 아니라, `solution()`  함수를 구현하는 방식
- 함수 파라미터나 리턴 타입을 잘 확인하고, 문제 조건에 맞춰 `solution()`  함수를 구현하기
- gcc 컴파일러를 사용한다! `#include <bits/stdc++.h>` 사용 가능!!
- `solution()`  함수 바깥(이전)에 전역변수를 선언할 수도 있다 <br><br>
  - 2024.06.01 기준 C++ 버전이 C++17이다....
  - 아직 ranges 라이브러리는 쓸 수 없다!! C++17의 structured binding은 사용 가능 <!-- ranges::max(vec) 대신 *max_element(vec.begin(), vec.end()) 쓰면 되긴 하는데, 솔직히 많이 짜증난다. 컴파일러 버전에 대한 정보도 안 주고,  -->

## 파일이름은 `{문제번호}.cpp`, 커밋 메시지는 `{문제번호: 문제 이름}`
- 문제번호는 url 끝부분, 6자리
- 커밋할 때 여유가 된다면 `Extended description`에 문제 분류 적어두기
