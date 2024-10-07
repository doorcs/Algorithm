#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // 크기를 1000으로 설정하면 마지막 원소의 인덱스가 999이므로
  // 1000까지의 자연수를 담으려면 배열의 크기가 1000보다 커야 함!!
  vector<bool> sieve(1001, true);
  sieve[0] = false;
  sieve[1] = false;
  for (int i = 2; i*i <= 1000; i++) {
    if (sieve[i])
      for (int j = i*i; j <= 1000; j += i)
        sieve[j] = false;
  } // 에라토스테네스의 체 (2부터 시작해서, 소수인 수의 배수들을 지워나가는 방법)

  /* 범위에 대해:
  
  합성수(소수가 아닌 수) `N`은 두 수 A, B의 곱으로 표현할 수 있는데,
  만약 A와 B가 둘 다 `√N` 보다 크다면 A*B > N이 되어 A*B == N과 모순이므로
  A와 B 중 적어도 하나는 `√N`보다 작거나 같다 (root N 이하)

  둘중에 더 작은 인수를 소인수분해하면 소수들의 곱으로 표현할 수 있고, 이 소인수들도 당연히 `√N`보다 작거나 같다 (root N 이하)

  따라서 합성수 N은 적어도 하나의 소인수를 가지며, 그 크기는 `√N` 이하!
  == 어떤 수 N이 `√N`까지의 소수 중 어떤 수도 약수로 가지지 않는다면, N은 소수!!!!!

  * 소수: 1과 자기 자신만을 약수로 가지는 수 || 인수: 어떤 수를 나누어 떨어지게 하는 수 == 어떤 수의 약수 || 소인수: 소수인 인수 || 소인수분해: 수를 소수인 인수들의 곱으로 분해
  */

  int N, cnt = 0;
  cin >> N;
  while (N--) {
    int qry;
    cin >> qry;
    if (sieve[qry]) cnt++;
  }
  cout << cnt;
}

/* 첫 풀이 (내부 반복문 조건이 비효율적):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<bool> sieve(1000);
  sieve[0] = true;
  sieve[1] = true;
  for (int i = 2; i*i <= 1000; i++) {
    if (sieve[i]) {
      continue;
    } else {
      for (int j = 2; i*j <= 1000; j++) {
        sieve[i*j] = true;
      }
    }
  }

  int N, cnt = 0;
  cin >> N;
  while (N--) {
    int qry;
    cin >> qry;
    if (!sieve[qry]) cnt++;
  }
  cout << cnt;
}

*/
