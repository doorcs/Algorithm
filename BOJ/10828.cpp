#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> vi; // push_back(), pop_back(), size(), empty(), back() 모두 지원. 스택처럼 사용할 수도 있다!
    cin.ignore(); // `getline()` 사용 전 필수작업

    while (N--) {
        string tmp;
        getline(cin, tmp);

        if (tmp.size() >= 6) {
            string sub = tmp.substr(5);
            vi.push_back(stoi(sub));
        } else if (tmp == "pop") {
            if (vi.empty()) cout << -1 << '\n';
            else {
                cout << vi.back() << '\n';
                vi.pop_back();
            }
        } else if (tmp == "size") {
            cout << vi.size() << '\n';
        } else if (tmp == "top") {
            if (vi.empty()) cout << -1 << '\n';
            else cout << vi.back() << '\n';
        } else cout << vi.empty() << '\n';
    }
}

/* std::stack 사용 코드:

int main() {
    int N; cin >> N;
    stack<int> s;
    cin.ignore();

    while (N--) {
        string tmp;
        getline(cin, tmp);
        if (tmp.size() >= 6) {
            string sub = tmp.substr(5);
            s.push(stoi(sub));
        } else if (tmp == "pop") {
            if (s.empty()) cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (tmp == "size") {
            cout << s.size() << '\n';
        } else if (tmp == "top") {
            if (s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        } else cout << s.empty() << '\n';
    }
}

 */
