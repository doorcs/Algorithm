#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    string s;
    while(true){
        getline(cin, s);
        if(s == ".") return 0;
        stack<char> stk;
        
        for(char it: s){
            if(it != '(' && it != ')' && it != '[' && it !=']') continue;

            if(stk.empty()){
                stk.push(it);
                continue;
            }
            
            if((stk.top() == '[' && it == ']') || (stk.top() == '(' && it == ')')) stk.pop();
            else stk.push(it);
        }

        if(stk.size()) cout << "no\n";
        else cout << "yes\n";
    }
}
