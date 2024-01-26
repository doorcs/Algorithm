#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> mp;

int main() {
    string str;
    cin >> str;

    for(char i='a'; i<='z'; i++) mp[i]; // 모두 int 기본값 0으로 초기화

    for(const auto& it: str) mp[it]++; // 있으면 +1

    for(const auto& [key, val]: mp) cout << val << ' '; // value만 출력
}
