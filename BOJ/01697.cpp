#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int arr[100004];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, K; cin >> N >> K; // 두개일 때도 지금처럼 한 줄에 쓸까?? 좀 더 생각해 볼 문제
    
    if (N == K) {
        cout << 0 << '\n';
        return 0;
    }

    queue<int> q;
    q.push(N); 
    while (!q.empty() && !arr[K]) {
        int curr = q.front();
        q.pop();

        if (curr > 0 && !arr[curr-1]) { // -1 이동
          arr[curr-1] = arr[curr]+1;
          q.push(curr-1);
        }
        if (curr+1 < 100001 && !arr[curr+1]) { // +1 이동
          arr[curr+1] = arr[curr]+1;
          q.push(curr+1);
        }
        if (curr*2 < 100001 && !arr[curr*2]) { // *2 이동
          arr[curr*2] = arr[curr]+1;
          q.push(curr*2);
        }
    }

    cout << arr[K] << '\n';
}
