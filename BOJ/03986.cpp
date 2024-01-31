#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int rep, res=0;
    cin >> rep;

    while(rep--){
        string str;
        cin >> str;
        if(str.size()%2 != 0) continue;

        stack<int> s;
        s.push(str[0]);
        for(int i=1; i<str.size(); i++){
            if(s.empty() || s.top() != str[i]) s.push(str[i]);
            else s.pop();
        }
        if(s.empty()) res++;
    }
    cout << res << '\n';
}
