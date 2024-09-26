#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, V;
  cin >> A >> B >> V;

  cout << ((V-A)%(A-B) ? (V-A)/(A-B)+2 : (V-A)/(A-B)+1);
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, V;
  cin >> A >> B >> V;

  int cnt = (V-A)/(A-B); // 마지막날에는 미끄러지지 않기 때문에 `V-A`를 기준으로 계산, `A-B`는 낮과 밤을 통틀어 하루동안 오르는 양

  cout << ((V-A)%(A-B) ? cnt+2 : cnt+1); // 나머지가 남는다면 `V-A`지점으로부터 이틀 뒤에 정상에 도달, 나누어 떨어진다면 `V-A` 지점으로부터 하루 뒤에 정상에 도달
}

*/
