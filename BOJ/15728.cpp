#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;
  vector<int> shared(N);
  deque<int> team(N);
  for (auto& it : shared) cin >> it;
  for (auto& it : team) cin >> it;
  sort(shared.begin(), shared.end()), sort(team.begin(), team.end());

  for (int i = 0; i <= K; i++) {
    int fr = max(team.front()*shared.front(), team.front()*shared.back());
    int rr = max(team.back()*shared.front(), team.back()*shared.back());

    if (i == K) return cout << max(fr, rr), 0;

    if (fr > rr) {
      team.pop_front();
    } else {
      team.pop_back();
    }
  }
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;
  vector<int> shared(N);
  vector<int> team(N);
  for (auto& it : shared) cin >> it;
  for (auto& it : team) cin >> it;

  for (int i = 0; i <= K; i++) {
    int ans = -10001, idx = 0;
    for (auto a : shared) {
      for (int b = 0; b < N; b++) {
        if (team[b] == 10001) continue;

        if (ans < a*team[b]) {
          ans = a*team[b], idx = b;
        }
      }
    }

    if (i == K) return cout << ans, 0;
    team[idx] = 10001; // 입력값의 범위가 -10000 이상 10000 이하이므로, 범위 밖의 값 사용
  }
}

*/
