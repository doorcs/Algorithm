using ll = long long;

class MinStack {
    stack<pair<int, int>> data;
public:
    // MinStack() { } // 그냥 기본 생성자 쓰기
    void push(int val) {
        if (data.empty()){
            data.push({val, val}); // 스택이 비어있을 경우 바로 넣기
            return; // return 까먹으면 안된다!! 아래로 계속 진행됨
        }

        if (data.top().second > val) data.push({val, val});
        else data.push({val, data.top().second});
    }

    void pop() {
        data.pop();
    }

    int top() {
        return data.top().first;
    }

    int getMin() {
        return data.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
