#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    while (n--) {
        int strt, end; // 변수명 strt 좀 괜찮은듯? 익숙해져보자
        cin >> strt >> end;
        for (int i = 0; i < end+1; i++) {
            if (i/4 != (i-1)/4) strt++;
            if (i/7 != (i-1)/7) strt--;
        }
        cout << strt << '\n';
    }
}
