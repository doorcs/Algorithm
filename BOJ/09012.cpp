#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);
    
    int TC;
    cin >> TC;

    string tmp;
    while(TC--){
        cin >> tmp;
        stack<char> s; // std::string은 `char` 컨테이너

        s.push(tmp[0]);
        for(int i=1; i<tmp.size(); i++){
            if(s.empty()){
                s.push(tmp[i]);
                continue;
            }
            if(s.top() == tmp[i]){
                s.push(tmp[i]);
                continue;
            }
            if(s.top() != tmp[i] && s.top() == '(') s.pop(); // stack top과 현재 index의 괄호가 다르고 && stack top이 '('일때만 pop
            else s.push(tmp[i]); // stack top과 다를때 무조건 pop하게 되면 `())(()`같은 케이스를 놓친다!
        }
        if(s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}
