#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll sum = 0, ans = 0;
  string s; cin >> s;

  for (const char a : s) {
    if (a == ',') {
      ans += sum;
      sum = 0;
    } else {
      sum *= 10;
      sum += a-'0';
    }
  }

  cout << ans + sum; // 마지막 한 번을 더 더해줘야함
}

/* 첫 풀이 ( vector<string> split() 활용 )

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

vector<string> split(string str, string delim) {
  vector<string> ret;
  size_t fr = 0, rr = str.find(delim);

  while (rr != string::npos) {
    if (fr != rr) ret.push_back(str.substr(fr, rr-fr));
    fr = rr + delim.size();
    rr = str.find(delim, fr);
  }

  ret.push_back(str.substr(fr));
  return ret;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s; cin >> s;
  auto v = split(s, ",");
  ll ans = 0;
  for (const auto& it : v) ans += stoi(it);
  cout << ans;
}


*/
