#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    int H, W, N;
    cin >> H >> W >> N;
    if (N % H == 0) {
      cout << H*100 + N/H << '\n'; // `*100`으로 출력 자릿수를 맞춰줄 수 있다!
    } else {
      cout << (N%H)*100 + N/H+1 << '\n';
    }
  }
}

/* using C-style I/O ( scanf(), printf() )

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int H, W, N;
    scanf("%d %d %d", &H, &W, &N);
    if (N % H == 0) {
      printf("%d%02d\n", H, N/H);
    } else {
      printf("%d%02d\n", N%H, N/H+1);
    }
  }
}

*/
