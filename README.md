<!-- 241124 - `README.md`보다 `readme.md`가 보기 편하다고 생각했었는데, 일반적인 컨벤션을 따르는 게 좋을 것 같다 -->
<!-- 241124 - I was thinking `readme.md` looks better than `README.md`, but I'd rather just follow THE standard naming convention -->

<details>
  <summary>기억해야 할 내용들 ( toggle )</summary><br>

- `getline()` 사용 전에 `cin` 객체를 통한 입력을 사용했다면 `cin.ignore()` 꼭 해주기
  ```cpp
  int N; cin >> N;
  cin.ignore()
  string s; getline(cin, s);
  ```
- `char` 타입의 숫자를 `정수형`으로 변환
  ```cpp
  char character = '1';
  int integer = character-'0'; // float, double, long, long long 모두 가능 (정수 값이 캐스팅되는것)
  ```
- `vector`를 활용한 이차원 배열 만들기
  ```cpp
  int COL = 세로길이(열), ROW = 가로길이(행)
  vector<vector<int>> brd(COL, vector<int>(ROW)); // `vector<T> vector(size, val=T())`를 중첩
  ```
- `fill()`을 활용해 주어진 벡터나 배열을 초기화 (일부 수정도 가능)
  ```cpp
  fill(iter, iter, val);
  // 이터레이터 두 개를 받아서, [inclusive, exclusive) 영역에 val을 채운다
  
  int arr[3] = {3, 6, 9}; // 새로 선언할 수 있다면 벡터를 쓰면 되는데, 문제에서 배열이 주어지는 경우가 있다
  fill(arr, arr+3, 0); // arr = {0, 0, 0}

  vector<int> vec(7, 3);
  fill(vec.begin()+2, vec.begin()+5, 6); // vec = {3, 3, 6, 6, 6, 3, 3}
  ```
- `stringstream` 클래스와 `getline()` 함수를 활용한 split
  ```cpp
  string str = "hello, world!";
  stringstream ss(str);
  while (getline(ss, str, ' ')) {
    cout << str << '\n'; // str 변수를 재활용
    // getline() 함수의 세번째 파라미터는 `반드시` char 타입이어야 함 (복잡한 delim 불가)
  }
  ```
- `split()` 구현체
  ```cpp
  vector<string> split(string str, string delim) {
    str.erase(str.find_last_not_of(" \t\n\r\f\v")+1); // 뒤쪽 공백 처리를 위한 right-trim
    vector<string> ret;
    size_t fr = 0, rr = str.find(delim); // 기능적 차이는 없지만 int를 쓰면 컴파일 warning
    while (rr != string::npos) {
      if (fr != rr) ret.push_back(str.substr(fr, rr - fr)); // delim이 연달아 나오는 케이스 대응
      fr = rr + delim.size();
      rr = str.find(delim, fr);
    }
    ret.push_back(str.substr(fr)); // delim이 하나도 없을 경우 전체를, 있다면 마지막 덩어리를 담아줌
    return ret;
  } // delimiter로 다양한 형태의 문자열을 사용할 수 있다
  ```
- 비트마스킹 배열과 `next_permutation()`을 활용한 조합 찾기
  ```cpp
  vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9}, idx{0, 0, 0, 0, 0, 1, 1, 1, 1}; // 0 먼저 써야함!
  
  do {
    for (int i = 0; i < 9; i++)
      if (idx[i])
        cout << num[i] << ' '; // {6, 7, 8, 9}에서 {1, 2, 3, 4}까지의 모든 조합을 `역순`으로
    cout << '\n';
  } while (next_permutation(idx.begin(), idx.end()));  
  ```
- 범위 기반 for문을 활용한 입출력 처리
  ```cpp
  vector<int> vec1(3);
  for (int& it : vec1) cin >> it; // 입력 처리에는 `&`를 붙여야 함 (reference variable)
  for (int it : vec1) cout << it << '\n'; // for (auto it : vec1) cout << it << '\n';

  vector<pair<int, int>> vec2(5);
  for (auto& [a, b] : vec2) cin >> a >> b; // (C++17) structured binding - 앞에 auto 붙여주기!!
  for (const auto [a, b] : vec2) cout << a << ' ' << b << '\n'; // 출력은 `&`가 없어도 됨
  ```
- `<algorithm>` 헤더 제공 함수들에서 *initializer_list 클래스*`{}` 활용
  ```cpp
  int val1 = 9999, val2 = 3210, val3 = -2147483648;
  cout << min({val1, val2, val3}) << ' ' << max({val1, val2, val3});
  // cout << min(val1, min(val2, val3)) << ' ' << max(val1, max(val2, val3));
  ```
- `비트 연산자`를 활용한 효율적인 `홀수` / 짝수 판별
  ```cpp
  int even = 2, odd = 3;
  if (odd&1) cout << "odd"; // 홀수와 &1하면 결과값이 1, true (비트패턴은 마지막 비트만 1)
  if (!(even&1)) cout << "even"; // 짝수와 &1 하면 결과값이 0, false (비트패턴은 모든 비트가 0)
  // 짝수 판정은 반드시 두 번 이상의 연산이 필요하지만, 홀수 판정은 `&1`로 한 번의 연산에 처리할 수 있다
  ```
</details>
<details>
  <summary>STL 컨테이너 사용법 정리 ( toggle )</summary><br>

- 컨테이너 공통:
  - .size() 메서드로 현재 담아두고 있는 요소의 수를 알 수 있음
  - .empty() 메서드로 현재 컨테이너가 비어있는지 알 수 있음
  - 컨테이너 생성 시점에 값들을 모두 알 수 있다면, initializer_list 생성자를 활용할 수 있음

- 문자열 ( `std::string` )
  ```cpp
  string str;
  // cin >> str; // cin을 통한 입력도 가능
  // cin.ignore() <<- 입력 처리에 cin 객체를 활용했다면, getline() 함수 사용 전에 cin.ignore() 필요
  getline(cin, str); // getline() 함수를 통해, 공백을 포함한 한 줄 입력을 string에 담을 수 있다
  // std::getline() 함수는 <string> 헤더에 있다!

  // 자르기 ( Substring )
  string sub = str.substr(start, count); // start 인덱스로부터 count개를 선택한 substring
  // str.substr(0, 3); <<- {0번째, 1번째, 2번째} 인덱스, 즉 {첫번째, 두번째, 세번째} 문자를 담아 return

  // 오른쪽 공백 제거 ( Right Trim )
  str.erase(str.find_last_not_of(" \t\n\r\f\v") + 1);
  // str.erase(find_last_not_of("0x20 | 0x09 | 0x0a | 0x0d | 0x0c | 0x0b")+1);
  // find_last_not_of()는 문자열이 모두 공백일 경우 string::npos를 반환하므로 +1을 해주면 0이 되는데,
  // str.erase(0)은 str.erase(0, string::npos)와 같고, 문자열을 모두 지운다
    
  // 왼쪽 공백 제거 ( Left Ttrim )
  str.erase(0, str.find_first_not_of(" \t\n\r\f\v"));
  // find_first_not_of()는 문자열이 모두 공백(whitespace character)일 경우 string::npos를 반환하므로
  // str.erase(0, string::npos)가 호출되어 문자열을 모두 지운다
  ```
- 맵 ( `std::map` )
  ```cpp
  map<T, U> mp; // map<T, U> mp{{key1, val1}, {key2, val2}};
  // key-value 매핑에 사용함. 내부적으로 pair<T, U>를 사용하며 key의 `operator<`를 적용해 오름차순으로 정렬함
  mp[key] = val; // 존재하지 않는 key에 접근하면 U의 기본 생성자가 호출되어 {key, val} 쌍을 map에 insert함
  mp[key]++; // map<int, int>일 경우, {key, 0} -> `++` -> 최종적으로 {key, 1}가 map에 insert됨
  .find(key); // find 메서드를 통해 특정 key의 존재 여부를 확인할 수 있음 - 존재하지 않을 경우 .end() 반환
  // .contains() 메서드가 더 직관적이지만, C++20 feature이므로 find 메서드에 익숙해지기
  ```
- 해시맵 ( `std::unordered_map` )
  ```cpp
  unordered_map<T, U> mp; // unordered_map<T, U> mp{{key1, val1}, {key2, val2}};
  // map과 비슷하지만 Hashing 방식으로 동작해 요소 접근의 시간복잡도가 O(1)
  // 단, key로 사용할 타입은 반드시 1. hash function, 2. equality check 두가지를 가지고 있어야 함
  // primitive types, string 정도만 key로 사용하는게 좋을 듯 (사용자 정의 객체를 key로 쓰려면 귀찮다)
  ```
- 셋 ( `std::set` )
  ```cpp
  set<T> s; // set<T> s{val1, val2, val3};
  // 포함 여부를 확인해야 할 때 시간복잡도를 줄일 수 있으며, 원소들의 uniqueness를 보장
  .insert(val); // insert 메서드를 통해 값을 추가하려고 `시도`할 수 있음 - 값이 이미 존재할 경우 무시됨
  .find(val); // find 메서드를 통해 특정 값의 존재 여부를 확인할 수 있음 - 존재하지 않을 경우 .end() 반환
  ```
- 리스트 ( `std::list` )
  ```cpp
  list<T> li; // list<T> li{val1, val2, val3};
  // [] 연산자를 지원하지 않아, 요소를 다룰 때 iterator를 사용해야 함
  // .begin() 이터레이터를 활용하는 방식이 가장 직관적임
  auto it = li.begin();
  cout << *it; // 첫번째 요소 참조
  for (int i = 0; i < N; i++) it++; // advance(it, N) 와 같다
  cout << *it; // N+1번째 요소 참조 (N이 2일 경우, 3번째 요소 참조)

  .insert(pos, val); // 이때 pos는 이터레이터. 새로 들어온 원소가 pos번째 원소가 됨
  .erase(pos); // 삭제된 원소 다음 원소를 가리키는 이터레이터를 return함. insert와 함께 사용할 수 있음
  li.insert(li.erase(it), val); // it자리에 원래 있던 원소를 삭제하고, val로 대체함
  ```
- 벡터, 동적 배열 ( `std::vector` )
  ```cpp
  vector<T> v; // vector<T> v{val1, val2, val3};
  // 동적 배열. 생성자를 호출 시 크기를 지정하지 않으면 기본 size와 capacity는 모두 0
  // push_back(), pop_back(), back() 세가지 연산으로 스택을 대체할 수 있음 (기능이 더 많아서 편리하다)
  .push_back(val); // 현재 요소들의 끝에 추가. stack.push() 대체 가능
  .pop_back(); // stack.pop() 대체 가능
  .back(); // stack.top() 대체 가능
  // .insert(pos, val) - insert 연산이 필요할 경우 vector 대신 list 쓰기
  vector<int> v(10);
  for (int& it : v) cin >> it; // for (auto& it : v) 도 가능
  ```
- 덱 ( `std::deque` )
  ```cpp
  deque<T> dq;
  .push_front(val);
  .pop_front();
  .push_back();
  .pop_back();
  // 뒤집는 연산이 필요할 때, 실제로 순서를 뒤집는 대신 반대로 순회하도록 할 수 있다
  ```
- 큐 ( `std::queue` )
  ```cpp
  queue<T> q;
  .front();
  .push(val);
  .pop();
  ```
- 우선순위 큐 ( `std::priority_queue` )
  ```cpp
  priority_queue<T> pq;
  .top(); // .front()가 아니라 .top()이다! top priority!!
  .push();
  .pop();
  ```
</details>
<details>
  <summary>언젠가 고쳤던 좋지 않은 습관들 ( toggle )</summary><br>

- 줄바꿈이 필요할 땐 `std::endl` 대신 `'\n'` 사용
- `cin.tie(nullptr)->ios_base::sync_with_stdio(false);` 처럼 쓰지 말고 분리하기
  ```cpp
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
  ```
- `for`, `while` 같은 제어문 키워드와 조건식 `괄호` 사이는 `한` `칸` 띄워주기
  ```cpp
    for(;;) // bad
    for (;;) // good!
  ```
<!-- google styleguide! -->
- `if`, `else if`, `else` 구문 정렬 - `closing brace on new line, else on same line`
  ```cpp
    if (cond1) {
      // 
    } else if (cond2) { // good!  
      //
    } else {
      //
    }
  ```
</details>
<details>
  <summary>자주 사용하는 변수명! ( toggle )</summary><br>

- 그래프를 표현하는 2차원 배열: `brd`, `arr` - **이때 인덱스는 반드시 [y][x]순으로!**
- 방문여부 마킹 배열: `vst`
- y좌표: `y`, `dy`
- x좌표: `x`, `dx`
  ```cpp
  vector<int> dy{1, 0, -1, 0}, dx{0, 1, 0, -1};
  // int dy[] = {1, 0, -1, 0}, dx[] = {0, 1, 0, -1};

  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny >= 0 && nx >= 0 && ny < col && nx < row && !vst[ny][nx) {
      // 그래프 탐색 처리 (상황에 맞게 DFS, BFS 중 선택)
    }
  }
  ```
- 앞, 뒤: `fr`, `rr`
- 중간: `mid`, `center`
- 출발지: `src`
- 목적지: `dst`
- 시작: `strt`
- 끝: `end`
- 현재: `curr`, `current`
- 이전: `prev`, `before`
- 다음: `next`
- 결과: `ans`, `res`, `ret`
- 합계: `tot`, `sum`
- 평균: `avg`
- 임시변수: `tmp`, `temp`
- 상태 관리: `flag`, `cond`
</details>

- - -

<!--

다른 사람들의 코드를 읽고 이해하는게 상상 이상으로 힘든 일이라는걸 느꼈다.
같은 일을 하는 코드라도 읽기 편하게 작성하려 노력하자!!

-->

- 2024.05 - 구글 C++ 스타일가이드를 따르려 노력하되, 의도적으로 무시할 부분들을 정하기 ( 문제 해결이 우선! ) <!-- 알고리즘 코딩 테스트는 논리적 사고력과 문제해결력을 확인하기 위한 것!! -->
  
  - `std`네임스페이스를 가져오지 않는 것을 권장하지만, 코드 작성 편의성을 위해 `using namespace std;` 쓰기
  - 여러 문장을 한 줄에 작성하는 것을 권장하지 않지만, `int N; cin >> N;` 정도는 한줄로 작성하기
- 2024.06 - 전처리문과 다른 코드들 사이를 한 줄 띄우기, indentation을 `4 spaces` 에서 `2 spaces` 로 줄이기
- 2024.07 - 클래스의 `operator<` 에는 반드시 <ins>***const***</ins> 붙여주기, `std::stack` 대신 `std::vector` 쓰기 ( 더 편하다 )
  
  - bool operator<(const ~~*Classname*~~& other) <ins>***const***</ins> { <!-- 일반적으로 <u></u> 처럼 u 태그 활용을 권장하지만, 깃허브에서는 `ins`태그를 통한 밑줄만 지원 -->
  - `stk.push() == vec.push_back()` | `stk.pop() == vec.pop_back()` | `stk.top() == vec.back()`
- 2024.08 - 숫자가 조금이라도 커질 것 같으면 long long 자료형 사용하기!!! *( `using ll = long long;` )*
<!-- ll 사용을 생활화하기! -->
- 2024.09 - `std::deque`를 사용할 때, 실제로 reverse 연산을 수행하는 대신 `flag` 쓰기
  
  - ~~reverse(dq.begin(), dq.end());~~ // bad
  - `bool rev = true;` // good!
- 2024.12 - `Big-O 시간 복잡도` 뿐만 아니라, **`대략적인 연산량`** 도 생각해보기 *( 브루트포스가 가능할지 검토! )*
