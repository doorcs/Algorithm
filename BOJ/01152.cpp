#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> split(string str, string delim){ // split 함수 기억하기! std::string의 find(), substr(), size() 메서드 활용
    vector<string> res;

    size_t fr = 0;
    size_t rr = str.find(delim);

    while(rr != string::npos){
        res.push_back(str.substr(fr, rr - fr));
        fr = rr + delim.size();
        rr = str.find(delim, fr);
    }

    res.push_back(str.substr(fr));

    return res;
}

int main() {
    string s;
    getline(cin, s);

    auto res = split(s, " "); // 공백으로 시작하거나 끝나는 경우엔? 단순한 방법은 전부 순회하면서 ""인지 확인하기
    int cnt{}; /*  == `int cnt = 0;`  */
    for(const auto& it: res){
        if(it != "") cnt++;
    }
    // 더 좋은 방법이 없을까?? split 로직을 개선?
    cout << cnt;
}
