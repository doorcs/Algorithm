#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  list<char> li;
  string s; cin >> s;
  for (char c : s) li.push_back(c);

  auto curr = li.end();
  int M; cin >> M;
  while (M--) {
    char cmd; cin >> cmd;
    switch (cmd) {
      case 'L':
        if (curr != li.begin()) curr--;
        break;
      case 'D':
        if (curr != li.end()) curr++;
        break;
      case 'B':
        if (curr != li.begin()) {
          curr--;
          curr = li.erase(curr); // 중요!!!!
          /** 
            * std::list의 .erase(iter) 메서드는
            * 해당 이터레이터가 가리키는 원소를 삭제하고
            * 삭제된 원소의 다음 이터레이터를 반환한다!
            */
        }
        break;
      default: // case 'P'
        char val; cin >> val;
        li.insert(curr, val); // std::list의 .insert(iter, val) 메서드는 첫번째 파라미터로 받은 이터레이터 
    }
  }

  for (char c : li) cout << c;
}
