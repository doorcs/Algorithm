using ll = long long;

class MinStack {
    vector<pair<int, int>> data;
public:
    // MinStack() { } // 그냥 기본 생성자 쓰기
    void push(int val) {
        if (data.empty()){
            data.push_back({val, val}); // 스택이 비어있을 경우 바로 넣기
            return; // return 까먹으면 안된다!! 아래로 계속 진행됨
        }

        if (data.back().second > val) data.push_back({val, val});
        else data.push_back({val, data.back().second});
    }

    void pop() {
        data.pop_back();
    }

    int top() {
        return data.back().first;
    }

    int getMin() {
        return data.back().second;
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
