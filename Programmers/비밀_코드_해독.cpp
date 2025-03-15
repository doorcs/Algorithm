#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<vector<int>> q, vector<int> ans) {
    int answer = 0;
    
    vector<int> li(n), idx(n);
    for (int i = 1; i <= n; i++) li[i-1] = i;
    for (int i = n-5; i < n; i++) idx[i] = 1;
    // idx 벡터는 n-5개의 원소만 담아 초기화한 다음, `for (int i = 0; i < 5; i++) idx.push_back(1);` 처럼 1을 다섯 개 넣어줘도 된다
    do {
        set<int> s;
        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (idx[i]) s.insert(li[i]);
        }
        for (int i = 0; i < q.size(); i++) {
            int cnt = 0;
            for (const int elem : q[i]) {
                if (s.find(elem) != s.end()) cnt++;
            }
            if (cnt != ans[i]) {
                valid = false;
                break;
            }
        }
        if (valid) answer++;
    } while (next_permutation(idx.begin(), idx.end()));
    
    return answer;
}

/* 5중 for문 풀이:

#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<vector<int>> q, vector<int> ans) {
    int answer = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a+1; b <= n; b++) {
            for (int c = b+1; c <= n; c++) {
                for (int d = c+1; d <= n; d++) {
                    for (int e = d+1; e <= n; e++) {
                        set<int> s{a, b, c, d, e};
                        bool valid = true;
                        for (int i = 0; i < q.size(); i++) {
                            int cnt = 0;
                            for (int j = 0; j < 5; j++) {
                                if (s.find(q[i][j]) != s.end()) cnt++;
                            }
                            if (cnt != ans[i]) {
                                valid = false;
                                break;
                            }
                        }
                        if (valid) answer++;
                    }
                }
            }
        }
    }
    return answer;
}

*/
