#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N, M, J; // M이 1이면 바구니의 크기가 1. 
    cin >> N >> M >> J;
    pair<int, int> capa = {1, M}; // M이 2라면 capa = {1, 2};

    int ans = 0; // 총 이동거리
    int curr, next;
    cin >> curr;
    J--; // 첫 입력은 직접 처리하므로 반복횟수 하나 빼주기
    if(curr > capa.second){
        ans += curr - capa.second; // 바구니 오른쪽 끝이 다음 지점에 딱 걸릴때까지만 이동
        capa.first += ans;
        capa.second += ans;
    }

    while(J--){
        cin >> next;
        
        if((curr - next) < 0){ // next가 curr보다 오른쪽일 때
            if(capa.first <= next && capa.second >= next) continue; // 바구니가 움직이지 않아도 될 때
            int tmp = next - capa.second; // 왼쪽으로 몇 칸 이동해야 하는지
            ans += tmp; // 총 이동거리 늘려주기
            capa.first += tmp;
            capa.second += tmp;
        }
        else{ // next가 curr와 같거나, curr 왼쪽일 때
            if(capa.first <= next && capa.second >= next) continue; // 바구니가 움직이지 않아도 될 때
            int tmp = capa.first - next; // 오른쪽으로 몇 칸 이동해야 하는지
            ans += tmp; // 총 이동거리 늘려주기
            capa.first -= tmp;
            capa.second -= tmp;
        }
        curr = next; // 새로운 next를 입력받기 위해 next를 curr로 옮겨주기 
    }
    cout << ans << '\n';
}
