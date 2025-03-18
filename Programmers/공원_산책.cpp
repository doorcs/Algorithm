#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int H = park.size(), W = park[0].size(); // 세로 H, 가로 W
    vector<vector<int>> brd(H, vector<int>(W));
    int y, x;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (park[i][j] == 'S') y = i, x = j, brd[i][j] = 1;
            if (park[i][j] == 'O') brd[i][j] = 1;
            if (park[i][j] == 'X') brd[i][j] = 0;
        }
    }
    for (string it : routes) {
        char dest = it[0];
        int dist = it[2]-'0';
        bool valid = true;
        
        switch (dest) {
            case 'E':
                for (int i = 1; i <= dist; i++) {
                    if (x+i >= W || !brd[y][x+i]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) x += dist;
                break;
            case 'W':
                for (int i = 1; i <= dist; i++) {
                    if (x-i < 0 || !brd[y][x-i]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) x -= dist;
                break;
            case 'N':
                for (int i = 1; i <= dist; i++) {
                    if (y-i < 0 || !brd[y-i][x]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) y -= dist;
                break;
            case 'S':
                for (int i = 1; i <= dist; i++) {
                    if (y+i >= H || !brd[y+i][x]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) y += dist;
        }
    }
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}
