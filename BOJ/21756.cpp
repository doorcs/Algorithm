#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    vector<int> vi(N);
    for (int i = 0; i < N; i++) vi[i] = i+1; // iota(vi.begin(), vi.end(), 1);
    
    while (N != 1) {
        int idx = 0; // 매 반복마다 초기화
        for (int i = 0; i < N; i++) {
            if (i&1) vi[idx++] = vi[i]; // 홀수 인덱스면 앞으로 당기기
        }
        N -= idx;
    }
    cout << vi[0];
}
