// first solved on Mar 27, 2024, 10:18 PM GMT+9 ( line 33 )
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> split(string str, string delim) {
  str.erase(str.find_last_not_of(" \t\n\r\f\v")+1); // rtrim
  vector<string> ret;
  size_t fr = 0, rr = str.find(delim);

  while (rr != string::npos) {
    if (fr != rr) ret.push_back(str.substr(fr, rr-fr)); // delimiter 중복으로 나올 때 && delimiter로 시작할 때 처리
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

  string s; getline(cin, s);
  auto ans = split(s, " ");

  cout << (ans.size() == 1 && ans[0] == "" ? 0 : ans.size()); // 공백으로만 구성된 테스트케이스에서 1이 아니라 0을 출력하기 위해
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// vector<string> split(string str, string delim){ // split 함수 기억하기! std::string의 find(), substr(), size() 메서드 활용
//     vector<string> res;

//     size_t fr = 0;
//     size_t rr = str.find(delim);

//     while(rr != string::npos){
//         res.push_back(str.substr(fr, rr - fr));
//         fr = rr + delim.size();
//         rr = str.find(delim, fr);
//     }

//     res.push_back(str.substr(fr));

//     return res;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     auto res = split(s, " "); // 공백으로 시작하거나 끝나는 경우엔? 단순한 방법은 전부 순회하면서 ""인지 확인하기
//     int cnt{}; /*  == `int cnt = 0;`  */
//     for(const auto& it: res){
//         if(it != "") cnt++;
//     }
//     // 더 좋은 방법이 없을까?? split 로직을 개선?
//     cout << cnt;
// }
