#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    vector<int> vi(N);
    for (int i = 0; i < N; i++) cin >> vi[i];
    ran::sort(vi);

    for (const auto& it : vi) cout << it << ' ';
}
