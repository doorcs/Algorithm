#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> vi(N);
    for (int i = 0; i < N; i++) cin >> vi[i];
    ran::sort(vi);

    while (M--) {
        int query; cin >> query;
        auto res = lower_bound(vi.begin(), vi.end(), query); // `std::lower_bound()`, std::upper_bound()`의 리턴 타입은 이터레이터

        if (res != vi.end() && *res == query) cout << res-vi.begin() << '\n'; // distance(res, vi.begin());
        else cout << -1 << '\n';
    }
}
