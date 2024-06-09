#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    string inpt; cin >> inpt;
    string fr = inpt.substr(0, inpt.find('*')), rr = inpt.substr(inpt.find("*")+1); // `.find('')`와 `.find("")` 사이에 유의미한 실행시간 차이는 없는 듯
    // std::find_first_of()나 std::find_first_not_of()등과는 다르게, string::find()는 파라미터로 문자열이 들어올 때 char단위로 쪼개지 않고 부분 문자열 그대로 검색해준다!

    while (N--) {
        string query; cin >> query;
        if (query.size() < fr.size() + rr.size() || query.substr(0, fr.size()) != fr || query.substr(query.size()-rr.size()) != rr) { // short circuit evaluation을 활용하기 위해 size를 첫번째로 계산
            cout << "NE" << '\n';
            continue;
        }
        cout << "DA" << '\n';
    }
}

/* 처음 푼 코드: ( 보자마자 split 함수 쓸 생각함 )

#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

vector<string> split(string str, string delim) {
    vector<string> ret;

    size_t fr = 0, rr = str.find(delim);
    while (rr != string::npos) {
        ret.push_back(str.substr(fr, rr-fr));
        fr = rr + delim.size();
        rr = str.find(delim, fr);
    }
    ret.push_back(str.substr(fr));

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    string inpt; cin >> inpt;
    auto tmp = split(inpt, "*");
    string fr = tmp[0], rr = tmp[1];

    while (N--) {
        string query; cin >> query;
        if (query.size() < fr.size() + rr.size() || query.substr(0, fr.size()) != fr || query.substr(query.size()-rr.size()) != rr) {
            cout << "NE" << '\n';
            continue;
        }
        cout << "DA" << '\n';
    }
}

*/
