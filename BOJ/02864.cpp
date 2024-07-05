// 처음 푼 코드:
#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string A, B;
  cin >> A >> B;

  for (auto& c : A) {
    if (c == '5') c = '6';
  }
  for (auto& c : B) {
    if (c == '5') c = '6';
  }

  int max = stoi(A) + stoi(B);

  for (auto& c : A) {
    if (c == '6') c = '5';
  }
  for (auto& c : B) {
    if (c == '6') c = '5';
  }

  int min = stoi(A) + stoi(B);

  cout << min << ' ' << max;
}

// 더 짧은 코드?
// 값을 변수에 저장하지 않고 바로 출력하면 코드 길이를 조금 줄일 수 있는데, 개인적으로는 변수를 사용하는 방식이 좀 더 이해하기 좋은 코드같다

/*

#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string A, B;
  cin >> A >> B;

  for (auto& c : A) {
    if (c == '6') c = '5';
  }
  for (auto& c : B) {
    if (c == '6') c = '5';
  }

  cout << stoi(A) + stoi(B) << ' ';

  for (auto& c : A) {
    if (c == '5') c = '6';
  }
  for (auto& c : B) {
    if (c == '5') c = '6';
  }

  cout << stoi(A) + stoi(B);
}

*/
