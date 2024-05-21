#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

ll K, N;

bool check(vector<ll>& vec, ll len) {
    int cnt = 0;

    for (ll i = 0; i < K; i++) cnt += vec[i] / len;

    if (cnt >= N) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> K >> N;
    vector<ll> vi(K);
    ll largest = 0;
    for (ll i = 0; i < K; i++) { // 주석에서 자세히..
        ll tmp; cin >> tmp;
        vi[i] = tmp;
        if (tmp > largest) largest = tmp;
    }

    ll fr = 1, rr = largest, res = 0; // vi 배열 내부를 이분탐색하는것이 아니라 1과 배열의 원소들 중 최댓값 사이에서 이분 탐색을 진행하는 것!!!

    while (fr <= rr) {
        ll mid = (fr+rr) / 2; // 이분탐색으로 빠르게 범위 좁혀나가기
        if (check(vi, mid)) {
            res = max(res, mid); // 랜선 수가 충분할 경우, res를 업데이트하고 더 큰 값을 시도
            fr = mid+1;
        } else {
            rr = mid-1;
        }
    }
    cout << res;
}

/* 반복문에서는 입력만 처리할 경우:

// for (ll i = 0; i < K; i++) cin >> vi[i];
// ...
// sort(vi.begin(), vi.end());
// rr = vi[vi.size()-1];
// 위 코드처럼 정렬 후 마지막 원소를 사용하는 방향은 비효율적임!

// rr = *max_element(vi.begin(), vi.end());
// 위 코드처럼 max_element()로 바꾸면 O(NlogN)을 O(N)으로 낮출 수 있다

*/

/* 반복문으로 입력을 처리하는 동시에 최댓값까지 계산해둘 경우:

ll largest = 0;
for (ll i = 0; i < K; i++) {
    ll tmp; cin >> tmp;
    vi[i] = tmp;
    if (tmp > largest) largest = tmp;
}

*/

// 입력이 끝난 다음 max_element를 사용하면 최댓값을 찾기 위해 벡터 전체를 한 번 순회하므로 O(N)
// 입력을 벡터에 저장하는 동시에 최댓값을 계산해두면(현재 입력과 현재 최댓값을 비교) 마찬가지로 O(N)
// 이 부분은 취향과 선택의 영역인듯?
