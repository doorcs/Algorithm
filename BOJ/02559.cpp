#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, K; cin >> N >> K;
    vector<int> vi(N);
    for (int i = 0; i < N; i++) cin >> vi[i];

    int fr = 0, rr = K;
    vector<int> res;
    while (rr <= N) {
        res.push_back(reduce(&vi[fr], &vi[rr])); // std::accumulate (C++17)
        fr++, rr++;
    }
    cout << ran::max(res); // std::ranges::max();
}

/*
 * 예전에 풀었던 코드 (240127)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for(int i=0; i<k; i++) {
        sum += v[i];
    }
    int res = sum;

    for(int i=k; i<n; i++) {
        sum += v[i] - v[i-k];
        res = max(res, sum);
    }

    cout << res << endl;
}

 */
