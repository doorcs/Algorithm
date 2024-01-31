#include <iostream>
using namespace std;

// 1안
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

// 2안
int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);
}

// 3안
void solution() {
    ios_base::sync_with_stdio(false); // 꼭 메인에 써줘야하는건 아니다. 단 전역으로 쓸 수는 없다
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main() {
    solution();
}

////// 전역으로는 못 써요
// ios_base::sync_with_stdio(false);
// cin.tie(nullptr);
// cout.tie(nullptr);
