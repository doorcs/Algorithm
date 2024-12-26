#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s, ans;
  cin >> s;
  if (s == "X") return cout << -1, 0;

  int cnt = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == 'X') {
      cnt++;
      if (cnt == 4) {
        ans += "AAAA";
        cnt = 0;
      }
    } else { // s[i] == '.'
      if (cnt == 0) {
        ans += '.';
      } else if (cnt == 2) {
        ans += "BB.";
        cnt = 0;
      } else {
        return cout << -1, 0;
      }
    }
  }
  if (cnt == 2) ans += "BB"; // XX로 끝날 때
  if (cnt&1) return cout << -1, 0; // 홀수개의 X로 끝날 때

  cout << ans;
}

/* 문자열을 하나만 사용하는 다른 풀이: https://www.acmicpc.net/source/84446237

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

char s[64];

int main(){
    scanf("%s", s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i; j < i + 4; j++){
            if(s[j] == 'X') cnt++;
            else break;
        }
        if(cnt == 4){
            s[i] = s[i + 1] = s[i + 2] = s[i + 3] = 'A';
        }
        else if(cnt == 2){
            s[i] = s[i + 1] = 'B';
        }
        else if(cnt % 2){
            printf("-1");
            return 0;
        }
    }
    printf("%s", s);
}

*/
