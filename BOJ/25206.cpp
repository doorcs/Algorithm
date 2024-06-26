#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

unordered_map<string, double> mp{
  {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
  {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
  {"F", 0.0}
};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  double res = 0, cnt = 0;

  int N = 20;
  while (N--) {
    string s; double t; string g; // string s, g; double t; 처럼 쓸 수도 있지만, 가독성을 위해
    cin >> s >> t >> g;

    if (g == "P") continue;
    cnt += t;
    res += t * mp[g]; // 대입 연산자는 연산자 우선순위 꼴등
  }

  cout << fixed << setprecision(6) << res/cnt;
}

/* 처음 풀이:

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

vector<string> split(string str, string delim) { // 복붙아님!!
  vector<string> ret;

  size_t fr = 0, rr = str.find(delim);
  while (rr != string::npos) {
    ret.push_back(str.substr(fr, rr-fr));
    fr = rr + delim.size();
    rr = str.find(delim, fr);
  }
  ret.push_back(str.substr(fr));

  return ret;
}

unordered_map<string, double> mp{
  {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
  {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
  {"F", 0.0}
};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  double res = 0;
  int cnt = 0;

  int N = 20;
  while (N--) {
    string s;
    getline(cin, s);

    auto tmp = split(s, " ");

    if (tmp[2] == "P") continue;
    cnt += stoi(tmp[1]);
    res += stoi(tmp[1]) * mp[tmp[2]];
  }

  cout << fixed << setprecision(6) << res/cnt;
}

*/
