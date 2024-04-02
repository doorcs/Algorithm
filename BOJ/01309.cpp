#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dp[100004][4];

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    dp[1][0] = 1; // 사자를 배치하지 않는 경우
    dp[1][1] = 1; // 사자를 칸 왼쪽에 배치하는 경우
    dp[1][2] = 1; // 사자를 칸 오른쪽에 배치하는 경우

    for(int i=2; i<=N; ++i){
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % 9901; // 이전 칸에 사자를 어떤식으로 배치했든간에 이번 칸에는 안 놓을 수 있다
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % 9901; // 왼쪽에 배치하려면 이전 칸에 사자가 없거나 오른쪽에 있어야 함
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % 9901; // 오른쪽에                 ''             왼쪽에      ''
    }

    cout << (dp[N][0] + dp[N][1] + dp[N][2]) % 9901; // (a + b) % c == (a%c + b%c) % c
}
