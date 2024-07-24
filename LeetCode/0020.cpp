// Date: Sun Apr 07 2024 20:30:10 GMT+0900 (Korean Standard Time)
using ll = long long;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (const auto& it : s) {
            if (it == '(' || it == '[' || it == '{') {
                stk.push(it);
                continue;
            }
            if(stk.empty()) return false;
            switch (it) {
            case ')':
                if (stk.top() == '(') stk.pop();
                else
                    return false;
                break;
            case ']':
                if (stk.top() == '[') stk.pop();
                else
                    return false;
                break;
            case '}':
                if (stk.top() == '{') stk.pop();
                else
                    return false;
                break;
            }
        }
        return stk.empty();
    }
};
