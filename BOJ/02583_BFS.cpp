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
