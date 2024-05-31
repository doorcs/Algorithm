#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

ll proc(vector<ll>& vec, ll val) {
    ll ret = 0; // int타입이면 틀린다!! 반드시 long long을 사용해야함
    for (const auto& it : vec) {
        if (it > val) ret += it - val;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll N, req;
    cin >> N >> req;
    vector<ll> vi(N);
    for (ll i = 0; i < N; i++) cin >> vi[i];
    ll fr = 0, rr = ran::max(vi);
    ll ans = 0;

    while (fr <= rr) {
        ll mid = fr + (rr-fr)/2; // (fr + rr)/2와 같지만, 오버플로우를 방지할 수 있음!! (0.5fr + 0.5rr)

        if (proc(vi, mid) >= req) {
            fr = mid+1;
            ans = mid;
        }
        else rr = mid-1;
    }
    cout << ans << '\n';
}

/* 알고리즘 문제 풀 땐 int대신 ll을 쓰는 습관을 들이자!!
 * 처음 쓴 코드:

#include <bits/stdc++.h>
#define int long long // 죄다 long long으로 처리해도 실행하는데 문제가 없긴 하지만, 그냥 int 대신 ll 쓰는 습관을 들이기....
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int proc(vector<int>& vec, int val) {
    int ret = 0;
    for (const auto& it : vec) {
        if (it > val) ret += it - val;
    }
    return ret;
}

int32_t main() { // main은 long long이면 안 됨! 반드시 int를 리턴해야한다
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, req;
    cin >> N >> req;
    vector<int> vi(N);
    for (int i = 0; i < N; i++) cin >> vi[i];
    int fr = 0, rr = ran::max(vi);
    int ans = 0;

    while (fr <= rr) {
        int mid = fr + (rr-fr)/2; // (fr + rr)/2와 같지만, 오버플로우를 방지할 수 있음!! (0.5fr + 0.5rr)

        if (proc(vi, mid) >= req) {
            fr = mid+1;
            ans = mid;
        }
        else rr = mid-1;
    }
    cout << ans << '\n';
}

*/
