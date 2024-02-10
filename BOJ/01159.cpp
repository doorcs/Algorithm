#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    int rep;
    cin >> rep;

    map<char, int> mp;
    for(int i=0; i<rep; i++){
        string in;
        cin >> in;

        if(mp.find(in[0]) != mp.end()) mp[in[0]]++;
        else mp.insert({in[0], 1});
    }

    string res = "";
    int flag = 0;
    for(const auto& [key, val]: mp){
        if(val >= 5){
            res += key;
            flag = 1; // 여러번 실행돼도 상관X
        }
    }

    if(flag) cout << res;
    else cout << "PREDAJA";
}
