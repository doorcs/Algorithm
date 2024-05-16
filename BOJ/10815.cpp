#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll N; cin >> N;
    vector<ll> vll(N);
    for (int i = 0; i < N; i++) cin >> vll[i];
    ran::sort(vll); // std::sort(vll.begin(), vll.end());

    ll M, tmp; cin >> M;
    while (M--) {
        cin >> tmp;
        cout << ran::binary_search(vll, tmp) << ' '; // 무려 `std::binary_search(begin, end, val)`이 있다...
    }
}

// 컨테이너를 직접 구현하려는게 멍청한 생각인건 자명하다. 하지만 알고리즘은..?
// 어떤식으로 구현할 수 있는지와 Complexity를 기억하고, 제공되는 구현체들을 최대한 활용하는 방향으로 공부해야 하나?

/* 이진탐색 구현:

bool binarySearch(vector<ll>& vec, ll fr, ll rr, ll val) {
    while (fr <= rr) {
        ll mid = (fr+rr)/2;
        if (vec[mid] == val) return true;
        else if (vec[mid] > val) rr = mid-1;
        else fr = mid+1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll N; cin >> N;
    vector<ll> vll(N);
    for (int i = 0; i < N; i++) cin >> vll[i];
    ran::sort(vll);

    ll M, tmp; cin >> M;
    while (M--) {
        cin >> tmp;
        cout << binarySearch(vll, 0, vll.size(), tmp) << ' ';
    }
}
*/

/* 해시맵 구현:

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        mp[tmp]++;
    } // <int, bool>로 선언하고 mp[tmp] = true;로 처리하는것보다 <int, int>로 선언하고 mp[tmp]++;로 처리하는게 더 빠르다

    int M; cin >> M;
    while (M--) {
        int tmp; cin >> tmp;
        cout << (mp[tmp] ? 1 : 0) << ' ';
    }
}
*/
