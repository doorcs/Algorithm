// Feb 3, 2024, 5:24 AM GMT+9
#include <bits/stdc++.h>
using namespace std;

int M, N, K, ans;

int arr[104][104]; // 칸별로 가중치가 필요한 상황이 아니기 때문에, visited 배열 없이도 풀 수 있는 문제!

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    cin >> N >> M >> K;
    while(K--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=y1; i<y2; i++){
            for(int j=x1; j<x2; j++) arr[i][j] = 1;
        }
    }

    vector<int> v; // size 담을 벡터
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(arr[i][j]) continue; // 방문했거나 사각형 안이면 continue
            ans++; // 새 connected component

            queue<pair<int, int>> q; // BFS w/ queue
            q.push({i, j});
            arr[i][j] = 1; // 방문 처리
            int size = 1; // 한칸 넣고 시작하니까 크기 초기값은 0이 아니라 1!
            while(!q.empty()){
                int x, y;
                tie(y, x) = q.front();
                q.pop();

                for(int i=0; i<4; i++){
                    int ny = y + dy[i];
                    int nx = x + dx[i];

                    if(ny < 0 or nx < 0 or ny >= N or nx >= M or arr[ny][nx]) continue; // nx, ny 좌표 validity 확인, 방문여부 확인

                    q.push({ny, nx});
                    arr[ny][nx] = 1;
                    size++;
                }
            }
            v.push_back(size);
        }
    }
    sort(v.begin(), v.end());

    cout << ans << '\n';
    for(auto it: v) cout << it << ' ';
}

/* 처음 떠올린 풀이 (DFS)

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

*/
