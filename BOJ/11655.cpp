#include <iostream>
#include <string>
#include <cctype> // isalpha(), isupper(), islower()
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])){
            if(str[i] >= 'A' && str[i] < 'A'+13) str[i] += 13;
            else if(str[i] >= 'A'+13 && str[i] < 'a') str[i] -= 13;
            else if(str[i] >= 'a' && str[i] < 'a'+13) str [i] += 13;
            else str[i] -= 13;
        }
    }
    cout << str << endl;
}
