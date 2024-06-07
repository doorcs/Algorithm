#include <bits/stdc++.h>
namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;

    while (N--) {
        list<char> li;
        auto curr = li.end();
        string str; cin >> str;

        for (const auto& c : str) {
            if (c == '-') {
              if (curr != li.begin()) {
                  curr--;
                  curr = li.erase(curr);
                }
            } else if (c == '<') {
              if (curr != li.begin()) curr--;
            } else if (c == '>') {
              if (curr != li.end()) curr++;
            } else li.insert(curr, c);
        }

        for (const auto& c : li) cout << c;
        cout << '\n';
    }
}
