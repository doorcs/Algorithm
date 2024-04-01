#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; // 앞뒤로 공백을 포함할 수 있는 문자열
    getline(cin, str);

    // 오른쪽 공백 제거 (Rtrim)
    str.erase(str.find_last_not_of(" \t\n\r\f\v") + 1); // find_last_not_of("0x20 | 0x09 | 0x0a | 0x0d | 0x0c | 0x0b") + 1;
    // find_last_not_of는 문자열이 모두 공백(std::isspace() 에서 인식하는 whitespace character)으로 이루어져 있을 경우 string::npos를 반환하므로 +1을 해주면 0이 되는데, str.erase(0)은 str.erase(0, string::npos)와 같고, 문자열을 모두 지운다
    
    // 왼쪽 공백 제거 (Ltrim)
    str.erase(0, str.find_first_not_of(" \t\n\r\f\v"));
    // find_first_not_of는 문자열이 모두 공백 등으로 이루어져 있을 경우 string::npos를 반환하므로 erase(0, string::npos)가 호출되어 문자열을 모두 지운다

    cout << str << '\n'; // trimmed string
}

// string::erase(index=0, count=string::npos); 첫번째 인자의 기본값은 0, 두번째 인자의 기본값은 string::npos
// `str.erase();` 처럼 사용하면 문자열을 모두 지운다!!

// 정확히 0x20(space) ' ' 공백만 제거하려면 str.find_first_not_of(' ')처럼 사용할 수도 있다.

// find_first_not_of는 char 자료형 하나를 인자로 받아서 해당 character가 아닌 것의 인덱스를 반환하는 오버로딩 형태도 가진다.
// find_first_not_of는 C-style string(const char*)을 인자로 받아서 해당 문자열을 구성하는 모든 문자들 중 하나라도 일치하지 않는 것의 인덱스를 반환하는 오버로딩 형태도 가진다.
