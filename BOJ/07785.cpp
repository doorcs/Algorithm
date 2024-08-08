#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<string, bool, greater<>> mp; // key의 내림차순으로 정렬하도록 functionl 헤더의 std::greater 활용

  ll N; cin >> N;
  while (N--) {
    string name, stat;
    cin >> name >> stat;
    if (stat == "enter") {
      mp[name] = true;
    } else mp[name] = false;
  }

  for (auto [k, v] : mp) {
    if (v) cout << k << '\n';
  }
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<string, bool> mp; // std::map은 자료들을 key의 오름차순으로 정렬.

  ll N; cin >> N;
  while (N--) {
    string name, stat;
    cin >> name >> stat;
    if (stat == "enter") {
      mp[name] = true;
    } else mp[name] = false;
  }

  vector<string> stk; // 출력 순서를 뒤집어주기 위해 스택 활용
  for (auto [k, v] : mp) {
    if (v) stk.push_back(k);
  }

  while (!stk.empty()) {
    cout << stk.back() << '\n'; // stk.top()
    stk.pop_back(); // stk.pop()
  }
}

*/

/* 래퍼 클래스를 활용한 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

class String {
public:
  String(string data): data(data) {}
  bool operator<(const String& other) const { return data > other.data; } // 내림차순 정렬을 위해

  string data;
};

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<String, bool> mp; // std::map은 자료들을 key의 오름차순으로 정렬. 이때 key의 `operator<`를 활용

  ll N; cin >> N;
  while (N--) {
    string name, stat;
    cin >> name >> stat;
    if (stat == "enter") {
      mp[{name}] = true;
    } else {
      mp[{name}] = false;
    }
  }

  for (const auto& [k, v] : mp) { // key, value
    if (v) cout << k.data << '\n';
  }
}

*/
