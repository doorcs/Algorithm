#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    vector<int> v(3);
    for (int i = 0; i < 3; i++) cin >> v[i];
    ran::sort(v);

    int diff1 = v[1] - v[0], diff2 = v[2] - v[1];

    if (diff1 == diff2) cout << v[0] - diff1;
    else { // 2 6 8 (4빠짐) / 2 4 8 (6빠짐)
        if (diff2 > diff1) cout << v[1] + diff1;
        else cout << v[1] - diff2;
    }
}

/* 처음 푼 코드:

#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    vector<int> v(3);
    for (int i = 0; i < 3; i++) cin >> v[i];
    ran::sort(v);

    int diff1 = abs(v[0]-v[1]), diff2 = abs(v[1]-v[2]);

    if (diff1 == diff2) cout << v[0] - diff1;
    else {
        if ((v[0] + abs(diff1-diff2)) == v[1]) cout << v[1] + abs(diff1-diff2);
        else cout << v[0] + abs(diff1-diff2);
    }
}

*/
