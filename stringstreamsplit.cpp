#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

string str; // inpt 변수를 그대로 사용해도 되지만 가독성을 위해 분리

int main(int argc, char* argv[]){
    string inpt;
    getline(cin, inpt); // 공백을 포함한 문자열을 std::string inpt에 저장

    stringstream ss(inpt); // stringstream 클래스의 객체 ss를 input string으로 초기화

    vector<string> splitted; // 결과를 저장할 벡터
    while(getline(ss, str, ' ')){ // `getline()`은 세번째 인자로 `char` 자료형의 delimiter를 받을 수 있음!
        splitted.push_back(str);
    }

    cout << splitted.size() << '\n';
    for(contst auto& it: splitted) cout << it << endl;
}
