// Date: Sun Apr 07 2024 22:24:20 GMT+0900 (Korean Standard Time)
using ll = long long;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (const auto& it : tokens) { // 연산자일 경우: 일단 pop 두번은 공통
            if (it == "+" || it == "-" || it == "*" || it == "/") {
                int a, b;
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop();

                if (it == "+") stk.push(b+a);
                else if (it == "-") stk.push(b-a); // b가 a보다 스택에 먼저 들어간 숫자!
                else if (it == "*") stk.push(b*a);
                else stk.push(b/a);
            } 
            else { // 숫자일 경우 그냥 스택에 push
                stk.push(stoi(it));
            }
        }
        return stk.top();
    }
};
