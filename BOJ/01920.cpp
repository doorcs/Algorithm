#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        mp[tmp]++;
    }

    int M; cin >> M;
    while (M--) {
        int query; cin >> query;
        if (mp[query]) cout << 1 << '\n'; // 0 == false, 나머지 값들은 전부 true
        else cout << 0 << '\n';
    }
}
