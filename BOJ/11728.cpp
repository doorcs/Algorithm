#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

constexpr int MAX = 2'147'483'647;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, M; cin >> N >> M; // N: 배열 A 크기, M: 배열 B 크기
    vector<int> vi1(N), vi2(M);
    for (int i = 0; i < N; i++) cin >> vi1[i];
    for (int i = 0; i < M; i++) cin >> vi2[i];
    vi1.push_back(MAX), vi2.push_back(MAX); // 포인터가 끝에 도달하면 무조건 반대편에서 꺼내도록

    vector<int> res;
    int pt1 = 0, pt2 = 0;
    while (pt1 < N || pt2 < M) {
        if (vi1[pt1] < vi2[pt2]) res.push_back(vi1[pt1++]);
        else res.push_back(vi2[pt2++]);
    }

    for (const auto& it : res) cout << it << ' ';
}

/*
 * 처음 쓴 코드:
 
        if (vi1[pt1] < vi2[pt2]) {
            res.push_back(vi1[pt1]);
            pt1++;
        } else {
            res.push_back(vi2[pt2]);
            pt2++;
        }
*/
