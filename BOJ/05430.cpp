#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<string> split(string str, string delim) {
//   vector<string> ret;
//   size_t fr = 0, rr = str.find(delim);

//   while (rr != string::npos) {
//     if (fr != rr) ret.push_back(str.substr(fr, rr-fr));
//     fr = rr + delim.size();
//     rr = str.find(delim, fr);
//   }
//   ret.push_back(str.substr(fr));

//   return ret;
// } // sol 1

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  while (T--) {
    string qry; cin >> qry;
    int cnt; cin >> cnt;
    string arr; cin >> arr;

    // [37,1] 꼴의 입력을 파싱해서 숫자만 덱에 집어넣어야함! (BAPC 2012 테케 중 발췌)
    deque<int> dq(cnt);

    // sol 1: string::substr()로 앞뒤를 한칸씩 자른 다음, split()과 std::stoi() 활용
    // arr = arr.substr(1, arr.size()-2);
    // auto tmp = split(arr, ",");
    // for (int i = 0; i < cnt; i++) dq[i] = stoi(tmp[i]);
    //

    // sol 2: 무시할 문자들을 저장할 char형 변수와 std::stringstream 활용
    stringstream ss(arr);
    char ig; ss >> ig;
    for (auto& it : dq) ss >> it >> ig; // int형으로 처리할 수 있는 부분까지만 it에 들어감!
    //

    bool err = false, rev = false;
    for (const auto& it : qry) {
      if (it == 'R') {
        if (rev) rev = false;
        else rev = true;
      } else { // it == 'D'
        if (dq.empty()) {
          err = true;
          break;
        } else {
          if (rev) dq.pop_back();
          else dq.pop_front();
        }
      }
    }

    if (err) { // err == true, 1
      cout << "error" << '\n';
      continue; // 다음 테케로
    }

    cout << '[';
    if (rev) {
      for (auto it = dq.rbegin(); it != dq.rend(); it++) {
        if (it != dq.rbegin()) cout << ',';
        cout << *it;
      }
    } else {
      for (auto it = dq.begin(); it != dq.end(); it++) {
      if (it != dq.begin()) cout << ',';
      cout << *it;
      }
    }
    cout << ']' << '\n';
  }
}
