#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int N; cin >> N;

  while (N--) {
    string str; cin >> str;
    deque<char> dq;
    auto curr = dq.begin();

    for (const auto& c : str) {
      if (c == '-') {
        if (curr != dq.begin()) {
          curr--;
          curr = dq.erase(curr);
        }
      } else if (c == '<') {
        if (curr != dq.begin()) curr--;
      } else if (c == '>') {
        if (curr != dq.end()) curr++;
      } else {
        curr = dq.insert(curr, c);
        curr++;
      }
    }

    for (const auto& c : dq) cout << c;
    cout << '\n';
  }
}

/* 처음 푼 코드:

#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    while (N--) {
        string str; cin >> str;
        list<char> li;
        auto curr = li.end(); // list<char>::iterator curr = li.end();

        for (const auto& c : str) {
            if (c == '-') {
              if (curr != li.begin()) {
                  curr--;
                  curr = li.erase(curr);
                  // std::list의 `.erase()` 메소드는 파라미터로 받은 `이터레이터`가 가리키는 값을 삭제한 다음 그 다음 인덱스를 가리키는 이터레이터를 반환!
                  // `li.erase(curr);` 처럼만 쓰게 되면 curr이 가리키는 값이 유효하지 않게 된다!!!
                }
            } else if (c == '<') {
              if (curr != li.begin()) curr--;
            } else if (c == '>') {
              if (curr != li.end()) curr++;
            } else li.insert(curr, c);
        }

        for (const auto& c : li) cout << c;
        cout << '\n';
    }
}

// `li.erase(curr++);`도 `curr = li.erase(curr);`와 똑같이 동작한다! ( 삭제를 수행한 다음, 이터레이터가 삭제된 원소 다음 번 원소를 가리키게 함으로써 이터레이터의 유효성 문제 해결 )

*/
