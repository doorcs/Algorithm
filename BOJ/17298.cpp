#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int TC;
    cin >> TC;

    vector<int> inpt(TC), res(TC);
    for(int i=0; i<TC; i++){
        cin >> inpt[i];
        res[i] = -1;
    }

    stack<int> stk;
    stk.push(0); // 3

    for(int i=1; i<TC; i++){ // 5 2 7
        if(stk.empty()) stk.push(i);

        if(inpt[i] <= inpt[stk.top()]) stk.push(i);
        else{
            while(!stk.empty() && inpt[i] > inpt[stk.top()]){
                res[stk.top()] = inpt[i];
                stk.pop();
            }
            stk.push(i);
        }
    }

    for(auto it: res) cout << it << ' ';
}
