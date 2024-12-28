#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string str, qry;
  getline(cin, str); // cin의 `operator>>`와 getline() 함수를 함께 사용하려면 cin.ignore()를 한번 호출해줘야하지만,
  getline(cin, qry); // 두 번의 입력 모두 getline() 함수를 활용해 처리하기 때문에 여기서는 필요하지 않다!

  int ans = 0;
  int fr = 0, rr = str.find(qry);
  while (rr != string::npos) { // string::npos는 unsigned int이고, int로 캐스팅하면 `-1` ( std::string 클래스에서 예외 처리를 위해 사용하는 상수 )
    ans++;
    fr = rr + qry.size();
    rr = str.find(qry, fr);
  }

  cout << ans;
}

/*

vector<string> split(string str, string delim){
  str.erase(str.find_last_not_of(" \t\n\r\f\v")+1); // trailing whitespaces를 처리하기 위한 Rtrim. split 함수 바깥에서 미리 처리해도 됨!

  vector<string> ret;
  size_t fr = 0, rr = str.find(delim);

  while (rr != string::npos) {
    if (fr != rr) ret.push_back(str.substr(fr, rr - fr)); // delimiter가 연달아 나올 때 빈 문자열을 추가하지 않도록 if문 추가
    fr = rr + delim.size();
    rr = str.find(delim, fr);
  }

  ret.push_back(str.substr(fr));
  return ret;
}

*/
