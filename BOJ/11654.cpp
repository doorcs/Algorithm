#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    
    cout << static_cast<int>(a); // 명시적(explicit) 타입 캐스팅

//  아래 코드들과 똑같이 동작한다:
//  cout << (int)a; // C-style casting (변환 과정에서 값의 손실이 발생할 수도 있음을 프로그래머가 알고 있어야 함)
//  cout << int(a); // function-style casting (C++ ONLY) <- C언어에선 쓸 수 없는 방식
//  cout << int{a}; // uniform initialization with initializer_list (C++11)
}
