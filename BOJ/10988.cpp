#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string in;
    cin >> in;

    string cmp(in);
    reverse(cmp.begin(), cmp.end());

    for(int i=0; i<in.size(); i++){
        if(in[i] != cmp[i]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}
