#include <bits/stdc++.h>
using namespace std;

const int MAX = 102;
int SIZE;

int arr[MAX][MAX];
int vst[MAX][MAX];

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, -1, 1};

void dfs(int y, int x, int sank){
    if(vst[y][x] || arr[y][x] <= sank) return;
    vst[y][x] = 1;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(nx < 0 || ny < 0 || nx >= SIZE || ny >= SIZE || arr[ny][nx] <= sank) continue;
        dfs(ny, nx, sank);
    }
}

int main() {
    cin >> SIZE;
    vector<int> capa;

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cin >> arr[i][j];
            capa.push_back(arr[i][j]);
        }
    }
    sort(capa.begin(), capa.end());
    capa.erase(unique(capa.begin(), capa.end()), capa.end());
    int maximum = 1;

    for(int i=0; i<capa.size()-1; i++){
        int sank = capa[i];
        memset(vst, 0, sizeof(vst));

        int cnt = 0;
        for(int i=0; i<SIZE; i++){
            for(int j=0; j<SIZE; j++){
                if(arr[i][j] <= sank || vst[i][j]) continue;

                dfs(i, j, sank);
                cnt++;
            }
        }
        maximum = max(cnt, maximum);
    }
    cout << maximum << '\n';
}
