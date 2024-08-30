#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<int> v(200); // 입력값의 범위가 `-100 <= value <= +100` 이므로 총 200칸이 필요!
  int N; cin >> N;
  while (N--) {
    int val; cin >> val;
    v[val+100]++; // 음수 인덱스는 사용할 수 없기 때문에 +100 처리
  }
  int qry; cin >> qry;
  cout << v[qry+100];
}

/* 첫 풀이 - map 사용

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
namespace ran = std::ranges;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  unordered_map<int, int> mp;
  int N; cin >> N;
  while (N--) {
    int tmp; cin >> tmp;
    mp[tmp]++;
  }
  int ans; cin >> ans;
  cout << mp[ans];
}

*/
