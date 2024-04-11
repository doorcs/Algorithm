#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    queue<int> q;
    for(int i=1; i<=N; i++) q.push(i);

    for(int i=0; i<N-1; i++){
        q.pop(); // 맨 위의 카드를 버리고
        q.push(q.front()); // 맨 위의 카드를 맨 아래에 넣는다
        q.pop();
    } /* 큐는 FIFO! 먼저 들어온 것 먼저 나간다 */

    cout << q.front();
}
