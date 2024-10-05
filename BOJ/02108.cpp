#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> v(N); // 인풋
  unordered_map<int, int> mp; // 최빈값 계산을 위한 맵
  double tot = 0;
  for (auto& it : v) {
    cin >> it;
    tot += it;
    mp[it]++;
  }
  sort(v.begin(), v.end()); // 중앙값을 찾기 위해 정렬

  int freq = 1;
  vector<int> v2; // 최빈값을 담을 벡터
  for (const auto& [k, val] : mp) { // 최빈값이 여러 개일 경우, 최빈값 중 두 번째로 작은 값을 출력해야 함
    if (val == freq) {
      v2.push_back(k);
    } else if (val > freq) {
      v2.clear();
      v2.push_back(k);
      freq = val;
    }
  }
  sort(v2.begin(), v2.end());

  cout << floor(tot/N + 0.5) << '\n'
    << v[N/2] << '\n'
    << (v2.size() == 1 ? v2[0] : v2[1]) << '\n'
    << abs(v[N-1] - v[0]);
}

// std::round() 함수를 쓰려면 `-0`을 예외 처리해줘야 한다 (값이 `-0.5 < val < 0` 일 경우 -0을 리턴)

// int avg = round(tot/N);
// if (avg == -0) avg = 0;
