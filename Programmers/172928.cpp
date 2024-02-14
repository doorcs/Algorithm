#include <string>
#include <vector>
using namespace std;

int brd[54][54];

vector<int> solution(vector<string> park, vector<string> routes){
    // S는 시작 위치, O는 갈 수 있는 곳, X는 갈 수 없는 곳
    int row = park[0].size(); // 가로
    int col = park.size(); // 세로
    int x, y;
    
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){ // 이중for문 돌릴때 인덱스는 [y][x] 쓰기!
            if(park[i][j] == 'S') y = i, x = j, brd[i][j] = 1;
            else if(park[i][j] == 'O') brd[i][j] = 1;
            else brd[i][j] = 0; // (park[i][j] == 'X')
        }
    }

    for(auto it: routes){
        char dir = it[0];
        int dist = it[2]-'0'; // 파싱
        bool flag = false;

        //////////////////////////////////////// switch(``){case``: ; break; case``: ; break; case``: ; break;, ...} ////////////////////////////////////////
        switch(dir){
            case 'E': // case `` 다음엔 중괄호가 아니라 콜론!
                for(int i = 1; i <= dist; i++){
                    if(x+i >= row || brd[y][x+i] == 0) flag = true;
                }

                if(!flag) x += dist;
                break;
                // switch-case 문 쓸 때는 각각의 case가 끝날때마다 반드시 `break;`를 붙여줘야한다!!! break 없으면 아래로 계속 진행됨!
            case 'W': // case `` 다음엔 중괄호가 아니라 콜론!
                for(int i = 1; i <= dist; i++){
                    if(x-i < 0 || brd[y][x-i] == 0) flag = true;
                }

                if(!flag) x -= dist;
                break;
            case 'N': // case `` 다음엔 중괄호가 아니라 콜론!
                for(int i = 1; i <= dist; i++){
                    if(y-i < 0 || brd[y-i][x] == 0) flag = true;
                }

                if(!flag) y -= dist;
                break;
            case 'S': // case `` 다음엔 중괄호가 아니라 콜론!
                for(int i = 1; i <= dist; i++){
                    if(y+i >= col || brd[y+i][x] == 0) flag = true;
                }

                if(!flag) y += dist;
                break; // 맨 마지막 case의 `break;`는 생략 가능
        }
    }
    vector<int> answer;
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}
