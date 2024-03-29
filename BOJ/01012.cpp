#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool arr[52][52];
bool vst[52][52];

int M, N, K;

int dy[]{0, 1, 0, -1};
int dx[]{1, 0, -1, 0};

void dfs(int y, int x){
    if(vst[y][x]) return; // base case
    vst[y][x] = true; // bool 타입으로 더 직관적인 코드 작성

    for(int i: {0, 1, 2, 3}){ // initializer_list와 range based for문 사용 (C++11) // `for(int i=0; i<4; i++){` 와 같다!
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 or nx < 0 or ny > N or nx > M or !arr[ny][nx]) continue;
        dfs(ny, nx);
    }
}

int main() {
    int TC; // 테케 처리에 T, t같은 변수명 사용 지양하기
    cin >> TC;

    while(TC--){
        cin >> M >> N >> K; // x좌표, y좌표 순으로 주어짐
        memset(arr, 0, sizeof(arr));
        memset(vst, 0, sizeof(vst));

        while(K--){
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        int ans{}; // brace init (C++11) // `int ans = 0;`

        for(int i=0; i<N; i++){ // y coor
            for(int j=0; j<M; j++){ // x coor
                if(!arr[i][j] or vst[i][j]) continue;
                dfs(i, j);
                ans++;
            }
        }

        cout << ans << '\n';
    }
}
