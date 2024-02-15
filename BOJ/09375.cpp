#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int TC, lines;
    string cloth, kind;

    cin >> TC;
    while(TC--){
        map<string, int> mp;
        cin >> lines;

        for(int i=0; i<lines; i++){
            cin >> cloth >> kind; // 사실 cloth 정보는 필요없다

            mp[kind]++; // mp[kind] 값이 존재하지 않을 경우 자동으로 0으로 초기화되고, 후위연산자 `++`를 이용해 카운팅
        }

        int ret = 1;
        for(const auto& [key, val]: mp) ret *= (val+1);

        cout << --ret << '\n';
    }
}
