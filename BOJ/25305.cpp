#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N, k;
    cin >> N >> k;

    vector<int> vi(N);
    for(int i=0; i<N; i++) cin >> vi[i];
    
    sort(vi.begin(), vi.end(), [](int a, int b){ return a > b; }); // 3번째 파라미터 `compare function`의 기본값은 `<` (오름차순 정렬, 작은것부터 시작해서 큰걸로)

    cout << vi[k-1];
}
