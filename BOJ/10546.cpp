#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  unordered_set<string> s;
  string st;
  cin >> st; // 첫번째 줄에 주어지는 참가자 수 버리기
  while (cin >> st) {
    if (!s.insert(st).second) s.erase(st); // 중복값을 허용하지 않는 컨테이너 (set계열, map계열)의 insert는 pair<iter, bool>을 반환한다!
  }                                        // 이 pair의 `.first` 멤버는 방금 삽입한 요소를 가리키고, `.second` 멤버는 삽입에 성공했을 경우 true! (삽입에 실패했을 경우 false)
  cout << *s.begin();
} // 문제 조건 상 정답은 유일하게 홀수 번 등장하는 값이므로, 짝수 번째 등장마다 값을 지워주고 마지막에 남은 값을 출력하는 방식으로 답을 찾을 수 있다!


/* 첫 풀이: 

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  unordered_map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  for (int i = 0; i < N-1; i++) {
    string s;
    cin >> s;
    mp[s]--;
  }

  for (const auto& [k, v] : mp)
    if (v) return cout << k, 0;
}

*/
