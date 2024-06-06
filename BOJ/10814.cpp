#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    vector<pair<int, string>> vec(N);

    for (int i = 0; i < N; i++) {
        int a;
        string b;
        cin >> a >> b;
        vec[i] = {a, b};
    }

    ran::stable_sort(vec, [](auto a, auto b) {
        return a.first < b.first;
    });

    for (const auto& [age, name] : vec) cout << age << ' ' << name << '\n';
}
