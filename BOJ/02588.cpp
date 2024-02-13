#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // a와 b는 세 자리 자연수
    
    cout << a * (b%10) << '\n';
    cout << a * (b/10 % 10) << '\n';
    cout << a * (b/100) << '\n';
    cout << a * b;
}
