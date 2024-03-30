#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N, M, res{};
    cin >> N >> M;

    vector<int> vi(N); // vector<int> vi; 처럼 선언할 수도 있지만, 크기를 미리 정해둬야 cin으로 바로 값을 받을 수 있다!
    for(int i{}; i<N; i++) cin >> vi[i];

    sort(vi.begin(), vi.end()); // sort(begin_iter, end_iter, func=operator<); // 세번째 파라미터는 기본적으로 `operator <`, 사용자 정의 함수로 대체 가능

    for(int i{}; i<N; i++){
        for(int j=i+1; j<N; j++) if(vi[i]+vi[j]==M) res++;
    }

    cout << res;
}
