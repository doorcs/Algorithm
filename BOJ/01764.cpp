#include <bits/stdc++.h>
namespace ran = std::ranges; // ranges 라이브러리를 써버릇하는게 내 미래에 도움이 되는 방향일까?
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, M; cin >> N >> M;

    string tmp;
    unordered_map<string, int> mp; // 알고리즘 문제나 코테용 문제에서 hash collision이 발생할 수도 있나? 극단적인 테스트케이스도 통과할 수 있는지 알아보기
    for (int i = 0; i < N+M; i++) {
        cin >> tmp;
        mp[tmp]++; // `mp[tmp]`로 접근하는 순간 value가 int형 기본값인 0으로 초기화되고, ++로 increment
    }

    vector<string> vs;
    for (const auto& [k, v] : mp) {
        if (v == 2) vs.push_back(k);
    }
    ran::sort(vs);

    cout << vs.size() << '\n';
    for (const auto& it : vs) cout << it << '\n';
}
