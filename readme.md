<details>
  <summary>언젠가 고쳤던 좋지 않은 습관들 ( toggle )</summary><br>

  - 줄바꿈이 필요할 땐 `std::endl` 대신 `'\n'` 쓰기
  - `std::cin.tie(nullptr)->ios_base::sync_with_stdio(false);` 처럼 쓰지 말고 분리해서 쓰기

      > `cin.tie(nullptr);`  
      > `cout.tie(nullptr);`  
      > `ios_base::sync_with_stdio(false);` 
  - `for`, `while` 같은 제어문 키워드와 조건식 괄호 사이는 한 칸 띄우기

      > `for(;;)` // bad
      > <!-- 이럴땐 한 칸만 띄워도 줄바꿈 가능! -->
      > `for (;;)` // good!
  - `if`, `else if`, `else` 구문 정렬하기 - `closing brace on new line, else on same line`

      > if (cond) {  
      > 
      > <ins>`} else if (cond) {` </ins>// good!  
      > 
      > } else {}
</details>

- - -

<!--

다른 사람들의 코드를 읽고 이해하는게 상상 이상으로 힘든 일이라는걸 느꼈다.
같은 일을 하는 코드라도 읽기 편하게 작성하려 노력하자!!

-->

- 2024.05 - 구글 C++ 스타일가이드를 따르려 노력하되, 의도적으로 무시할 부분들을 정하기 ( 문제 해결에 초점을 맞추기 )
  
  - 네임스페이스를 전부 가져오는 것을 권장하지 않지만, 코드 작성 편의성을 위해 `using namespace std;` 쓰기
  - 여러 문장을 한 줄에 작성하는 것을 권장하지 않지만, `int N; cin >> N;` 정도는 한줄로 작성하기
- 2024.06 - 전처리문과 다른 코드들 사이를 한 줄 띄우기, indentation을 `4 spaces` 에서 `2 spaces` 로 줄이기
- 2024.07 - 클래스의 `operator<` 에는 반드시 <ins>***const***</ins> 붙여주기, `std::stack` 대신 `std::vector` 쓰기 ( 더 편하다! )
  
  - bool operator<(const ~~*Classname*~~& other) <ins>***const***</ins> { <!-- 일반적으로 <u></u> 처럼 u 태그 활용을 권장하지만, 깃허브에서는 `ins`태그를 통한 밑줄만 지원 -->
  - `stk.push() == vec.push_back()` | `stk.pop() == vec.pop_back()` | `stk.top() == vec.back()`
- 2024.08 - 숫자가 조금이라도 커질 것 같으면 long long 자료형 사용하기!!! *( `using ll = long long;` )*
<!-- ll 사용을 생활화하기! -->
- 2024.09 - `std::deque`를 사용할 때, 실제로 reverse 연산을 수행하는 대신 `flag` 쓰기
  
  - ~~reverse(dq.begin(), dq.end());~~ // bad
  - `bool rev = true;` // good!
