#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  
    string s; cin >> s;
    ran::sort(s, greater{}); // sort(s.begin(), s.end(), greater<char>());
  
    cout << s; // 이렇게도 풀 수 있는 이유? std::string은 char를 담고 있고, 0에서 9까지의 숫자들은 ASCII로 변환해도 오름차순이기 때문!! ('0' == 48, '9' == 57)
}

// '0' == 48, 'A' == 65, 'a' == 97

/* 처음 푼 코드:

#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    string s; cin >> s;
    vector<int> vi(s.size());
    for (size_t i = 0; i < s.size(); i++) {
        vi.push_back(s[i]-'0');
    }
    ran::sort(vi, greater{});

    for (size_t i = 0; i < s.size(); i++) cout << vi[i];
}

 */
