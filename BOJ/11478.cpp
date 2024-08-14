#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  size_t sz = s.size(), curr = 1;
  unordered_set<string> st; // 변수명 이게 최선일까??

  while (curr <= sz) {
    for (size_t i = 0; i <= sz-curr; i++) st.insert(s.substr(i, curr));
    curr++;
  }

  cout << st.size();
}

/* 처음엔 그냥 std::set을 쓰고, 변수명도 `set`을 써서 풀었음:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  size_t sz = s.size();
  size_t curr = 1;
  set<string> set;

  while (curr <= sz) {
    for (size_t i = 0; i <= sz-curr; i++) set.insert(s.substr(i, curr));
    curr++;
  }

  cout << set.size();
}

*/
