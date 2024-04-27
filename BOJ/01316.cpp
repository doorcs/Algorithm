#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, cnt{}; cin >> N;
    while (N--) {
        bool flag = true;
        string s; cin >> s;
        unordered_map<char, bool> mp; // std::map을 쓸 수도 있지만,
        if (s.size() == 1) { // 길이가 1이면 항상 추가.
            cnt++;
            continue;
        }
        for (size_t i = 1; i <= s.size(); i++) { // 1번 인덱스부터 끝까지 확인, 이전 인덱스와 문자가 달라졌다면 map에 마킹
            if (mp[s[i]] == true) { // mp[s[i]]로 접근하면 bool형의 기본값(false)로 알아서 초기화
                flag = false; // 더 좋은 방법이 있을까..?
                break; // for문 조기 종료
            }
            if (s[i] != s[i-1]) mp[s[i-1]] = true; // 이전 인덱스에서 나왔던 문자는 나왔다고 표시
        }
        if (flag) cnt++; // 문제의 조건을 만족하는 문자열일 경우에만 cnt++ 수행
    }
    cout << cnt;
}
