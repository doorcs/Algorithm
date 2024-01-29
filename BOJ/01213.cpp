#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);

    string str, res = "", middle = "";
    cin >> str;

    map<char, int> mp;
    for(char it: str) mp[it]++;

    for(const auto& [key, val]: mp){
        if(val % 2 != 0) {
            if(!middle.empty()) {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            middle = key;
        }
        res += string(val/2, key); // string(size_t 길이, char 문자(char 1개)) 이렇게 하면 `두번째 인자로 받은 char를 첫번째 인자인 size_t번 반복한 string`을 생성
    }

    string rev(res);
    reverse(rev.begin(), rev.end());
    cout << res + middle + rev << '\n';
}
