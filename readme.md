<details>
  <summary>언젠가 고쳤던 좋지 않은 습관들:</summary><br>

  - 줄바꿈이 필요하다면 `std::endl` 대신 `'\n'` 쓰기
  - `std::cin.tie(nullptr)->ios_base::sync_with_stdio(false);` 처럼 쓰지 말고, 의미가 명확히 전달될 수 있도록 분리해서 쓰기
    
      > ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  - `for`, `while` 같은 제어문 키워드와 조건식 괄호 사이를 한 칸 띄우기
    
      > `for(;;)` 처럼 붙여서 쓰지 말고 `for (;;)` 처럼 한 칸 띄우기!
  - `if`, `else if`, `else` 구문을 쓸 때 줄바꿈 정렬!! `closing brace on new line, else on same line`
  
      > if (cond) {  
      > //  
      > } else if (cond) {  
      > //  
      > } else {}  
</details>

- - -
- 2024.05: 구글 C++ 스타일가이드를 따르려 노력하되, 의도적으로 무시할 부분들을 정하기 (문제 해결에 초점을 맞추기)
  - `using namespace std;` - 네임스페이스를 전부 가져오는 것을 권장하지 않지만, 코드 작성 편의성을 위해 사용
  - 여러 문장을 한줄에 쓰는 것을 권장하지 않지만, `int N; cin >> N;` 처럼 코드 가독성에 크게 방해가 되지 않는 경우 사용

<!--
- 2024.06 - indentation을 4 spaces에서 2 spaces로 줄이기
-->
