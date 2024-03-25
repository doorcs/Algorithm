#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> split(string str, string delim){
    vector<string> res;

    size_t fr = 0;
    size_t rr = str.find(delim);

    while(rr != string::npos){
        res.push_back(str.substr(fr, rr - fr));
        fr = rr + delim.size();
        rr = str.find(delim, fr);
    }

    res.push_back(str.substr(fr));

    return res;
}

int main() {
    string str;
    getline(cin, str);

/* std::string의 `find()` 메소드를 활용하기 때문에, char 자료형으로 표현 가능한 delimiter도 double quote로 감싸서 std::string으로 넘겨줘야한다!! */
    auto splitted = split(str, " "); /* delimiter는 변경 가능 */
    cout << splitted.size() << '\n';

    for(const auto& it: splitted) cout << it << ' ';
}
