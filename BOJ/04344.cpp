#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(false);

    int C; cin >> C;
    while(C--){
        int N; cin >> N;
        vector<int> vi(N);
        for(int i = 0; i < N; i++) cin >> vi[i];
        double avg = accumulate(vi.begin(), vi.end(), 0.0) / N;
        int cnt{};
        ranges::for_each(vi, [avg, &cnt](const auto& a){
            if(a > avg) cnt++;
        });
        cout << fixed << setprecision(3) << double(cnt)/N * 100 << "%\n";
    }
}
