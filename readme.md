## 변수명:  *Case Sensitive!!!*
**0. 문제에서 변수명을 주는 경우에는 대소문자까지 구분해서 그대로 쓰기 (N, M, K 등등)**
- 테스트케이스 개수 처리:  rep, cnt는 여기서 쓰지 말 것!
  >`int TC; 
  >cin >> TC; 
  >while(TC--){`
- 그래프 문제 2차원 배열: brd[y][x]   ***이때 인덱스는 반드시 [y][x]순으로 하기!!***
- 방문여부 마킹 배열: vst
- 이동방향 관련 변수들:
  - int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};
  - int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};  
      
      
  - for(int i=0; i<8; i++){
    - int ny = y + dy[i];
    - int nx = x + dx[i];
  - }
- 앞, 뒤: fr, rr
- 출발지: src, beg, org, orig
- 목적지: dst, end
- 현재: cur, curr
- 이전: prev, prv
- 다음: next, nxt
- 결과: ans, res, ret
- 임시변수: tmp, temp, t

* * *

- 함수로 분리한 코드에서 필요한 변수들은 가급적 전역으로 선언. 초기화가 필요하다면 함수 호출시 `memset`이나 `std::fill`로 초기화
- vector: v1, v2, ..., vec1, vec2, ...
