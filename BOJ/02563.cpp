#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int brd[104][104];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    while (N--) {
        int x, y;
        cin >> x >> y;
        for (int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                brd[i][j] = 1; // 값이 중요하지 않아서 `brd[i][j]++;` 로도 가능
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (brd[i][j]) ans++;
        }
    }
    cout << ans;
}
