#include <string>
#include <vector>
#include <iostream>

using namespace std;

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

int main() {
  string s;
  getline(cin, s);

  /* std::string의 `find()` 메소드를 활용하기 때문에, char 자료형으로 표현 가능한 delimiter도 double quote로 감싸서 std::string으로 넘겨줘야한다!!! */
  auto splitted = split(s, " "); /* delimiter는 변경 가능 */
  cout << splitted.size() << '\n';

  for (const auto& it: splitted) cout << it << ' ';
}
