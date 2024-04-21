컨테이너 이름은 원소의 타입을 알 수 있게 짓기
> `vector<int>` vi;  
> `pair<int, int>` pii;  
> `vector<pair<int, string>>` vpis;
  
**문제에서 변수명을 주는 경우에는 대소문자까지 구분해서 그대로 쓰기!!! (N, M, K 등등)**
- 테스트케이스 개수 처리: rep, cnt는 여기서 쓰지 말 것!  
  >int TC; (문제에서 N이라고 주면 N 쓰기)  
  >cin >> TC;  
  >while (TC--) {  
- 그래프 문제 2차원 배열: brd[y][x]   ***이때 인덱스는 반드시 [y][x]순으로 하기!!***
- 방문여부 마킹 배열: vst
- 이동방향 관련 변수들 (`4방향일땐 10-10, 010-1`):
  >int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};  
  >int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1}; == std::ranges::rotate(dy, dy+6); | std::rotate(dy, dy+6, dy+8)   
  >for (int i{}; i < 8; i++) { int ny = y + dy[i]; int nx = x + dx[i]; }  
- 앞, 뒤: fr, rr
- 중간: mid, middle, center
- 출발지: src
- 목적지: dst
- 현재: cur, curr
- 이전: prev, prv
- 다음: next, nxt
- 결과: ans, res, ret(return value!)
- 합계: tot, sum
- 평균: avg
- 임시변수: tmp, temp, t

- - -

- 함수로 분리한 코드에서 쓰는 변수들은 전역으로 선언해두기! 초기화가 필요하다면 함수 호출시 `memset()`이나 `std::fill()`로 초기화
  - memset(`begin`, `{0 or 1}`, `length`);
      > memset()은 두번째 파라미터를 `unsigned char`형(1바이트)으로 처리!!  
      > ***`2바이트 이상`을 채울때 sign extention을 하는게 아니라 `바이트를 복사`*** 하기 때문에, 0과 -1에서만 안전  
 
  - std::fill(`begin`, `end`, `value`); == std::ranges::fill(`container`, `value`);
      > 모든 `value`에 범용으로 사용 가능!
