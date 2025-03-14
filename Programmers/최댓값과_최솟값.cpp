#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> split(string str, string delim) {
  str.erase(str.find_last_not_of(" \t\n\r\f\v")+1); // rtrim
  vector<string> ret;

  size_t fr = 0, rr = str.find(delim);
  while (rr != string::npos) {
      if (fr != rr) ret.push_back(str.substr(fr, rr-fr)); // delim이 연속으로 나올 때, ret에 공백이 들어가지 않도록
      fr = rr + delim.size();
      rr = str.find(delim, fr);
  }

  ret.push_back(str.substr(fr));
  return ret;
}

string solution(string s) {
  auto splitted = split(s, " ");
  ll minimum = 1e9, maximum = -1e9;
  for (int i = 0; i < splitted.size(); i++) {
      int curr = stoi(splitted[i]);
      if (minimum > curr) minimum = curr;
      if (maximum < curr) maximum = curr;
  }
  string answer = "";
  answer = to_string(minimum) + " " + to_string(maximum);
  return answer;
}

/* stringstream을 활용해 split을 처리하는 풀이:

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
  string answer = "";
  string token;
  stringstream ss(s);
  vector<int> v;

  while (getline(ss, token, ' ')) {
    v.push_back(stoi(token));
  }
  // 보통 getline() 함수는 `getline(cin, str)` 처럼 한 줄 입력을 받을 때 사용하지만,
  // 1. 입력 stream으로 stringstream을 줄 수 있고
  // 2. 세번째 파라미터로 delimiter를 줄 수도 있다! (기본값은 '\n') - the default delimiter is the endline character.

  sort(v.begin(), v.end());

  answer = to_string(v.front()) + " " + to_string(v.back());
  return answer;
}

*/
