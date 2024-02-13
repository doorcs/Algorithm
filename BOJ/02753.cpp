#include <iostream>
using namespace std;

int main() {
    int yr;
    cin >> yr;

    if(yr%4 == 0 and yr%100 != 0 or yr%400 == 0) cout << 1; // `&&` == `and`, `||` == `or` since C++98(ISO 14882:1998)
    else cout << 0;
}
