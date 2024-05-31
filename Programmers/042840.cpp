#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int A[] = {1, 2, 3, 4, 5};
int B[] = {2, 1, 2, 3, 2, 4, 2, 5};
int C[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int cnt1{}, cnt2{}, cnt3{};
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == A[i%5]) cnt1++;
        if (answers[i] == B[i%8]) cnt2++;
        if (answers[i] == C[i%10]) cnt3++;
    }
    int maxval = max({cnt1, cnt2, cnt3});
    
    if (maxval == cnt1) answer.push_back(1);
    if (maxval == cnt2) answer.push_back(2);
    if (maxval == cnt3) answer.push_back(3); // 이렇게 하면 중복값 있을 때 오름차순 처리까지 가능

    return answer;
}
