#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    int N = answers.size();
    
    vector<int> a{1, 2, 3, 4, 5}, b{2, 1, 2, 3, 2, 4, 2, 5}, c{3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int acnt = 0, bcnt = 0, ccnt = 0;
    for (int i = 0; i < N; i++) {
        if (a[i%5] == answers[i]) acnt++;
        if (b[i%8] == answers[i]) bcnt++;
        if (c[i%10] == answers[i]) ccnt++;
    }
    
    vector<int> answer;
    int maxval = max({acnt, bcnt, ccnt});
    if (maxval == acnt) answer.push_back(1);
    if (maxval == bcnt) answer.push_back(2);
    if (maxval == ccnt) answer.push_back(3);
    
    return answer;
}
