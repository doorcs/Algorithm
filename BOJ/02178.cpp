#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M;

int arr[102][102];
int vst[102][102];

int dy[]{1, 0, -1, 0}; // int dy[] = {1, 0, -1, 0};
int dx[]{0, 1, 0, -1};

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    cin >> N >> M;
    cin.ignore(); // std::cin 사용 후 std::getline() 사용 전 버퍼 비워주기!

    string str;
    for(int i=0; i<N; i++){
        getline(cin, str);
        for(int j=0; j<M; j++) arr[i][j] = str[j] - '0';
    }

    queue<pair<int, int>> q;
    vst[0][0] = 1;

    q.push({0, 0}); // brace init (C++11)
    while(q.size()){
        auto [y, x] = q.front(); // structural binding (C++17)
        q.pop();

        for(int i: {3, 1, 0, 2}){ // range based for with initializer_list (C++11) // 순서는 그냥 재미삼아 섞어봄
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 or ny < 0 or N < ny or M < nx or !arr[ny][nx] or vst[ny][nx]) continue; // `&& == and`, `|| == or` (C++98) // and, or을 쓰는게 더 semantic한 코드 아닌가?

            vst[ny][nx] = vst[y][x] + 1;
            q.push({ny, nx});
        }
    }

    cout << vst[N-1][M-1];
}
