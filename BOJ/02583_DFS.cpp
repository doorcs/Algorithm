#include <bits/stdc++.h>
using namespace std;

int M, N, K; // 100 이하의 자연수

int ans, cnt;

int arr[104][104]; // 이 문제에서는 visited 배열이 없어도 된다!

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};

void dfs(int y, int x){
    if(arr[y][x]) return; // base case??
    cnt++; // 새로 호출됐다면 cnt++
    arr[y][x] = 1;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
        dfs(ny, nx);
    }
}

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    cin >> N >> M >> K;
    while(K--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=y1; i<y2; i++){
            for(int j=x1; j<x2; j++) arr[i][j] = 1; // 이중 for문을 돌릴 때, 인덱스를 `[x][y]`가 아니라 `[y][x]`로 두는게 자연스럽단걸 기억하기
        }
    }

    vector<int> counts;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cnt = 0;
            if(arr[i][j]) continue;

            dfs(i, j);
            ans++; // dfs 호출시마다 변수 `ans`값을 증가시키는 대신, 그냥 counts 벡터의 size()를 이용해도 된다!
            counts.push_back(cnt);
        }
    }
    sort(counts.begin(), counts.end());

    cout << ans << '\n'; 
//  cout << counts.size() << '\n'; // 이렇게
    for(auto it: counts) cout << it << ' ';
}
