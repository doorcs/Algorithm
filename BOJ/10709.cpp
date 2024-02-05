#include <bits/stdc++.h>
using namespace std;

int arr[104][104];

int main() {
    int H, W;
    cin >> H >> W;

    string tmp;
    for(int i=0; i<H; i++){
        cin >> tmp;
        for(int j=0; j<W; j++){
            if(tmp[j] == 'c') arr[i][j] = 0; // 구름이 있는 지역이면 0으로,
            else arr[i][j] = -1; // 구름이 없는 지역이면 -1로 초기화
        }
    }

    for(int i=0; i<H; i++){
        for(int j=1; j<W; j++){ // 가로줄마다 두번째(index는 1) 요소부터 끝까지 반복
            if(arr[i][j] == -1 && arr[i][j-1] >= 0) arr[i][j] = arr[i][j-1]+1;
        } // 현재 값이 -1이고 && 이전(x축 기준) 값이 0보다 크거나 같을 경우 `이전 값+1`로 변경
    }

    for(int i=0; i<H; i++){ // 출력
        for(int j=0; j<W; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}
