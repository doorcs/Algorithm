#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> split(string str, string delim) {
  str.erase(str.find_last_not_of(" \t\n\r\f\v")+1); // Rtrim
  vector<string> ret;

  size_t fr = 0, rr = str.find(delim);
  while (rr != string::npos) {
    if (fr != rr) ret.push_back(str.substr(fr, rr-fr));
    fr = rr + delim.size();
    rr = str.find(delim, fr);
  }
  ret.push_back(str.substr(fr));

  return ret;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T; cin >> T;
  cin.ignore();
  while (T--) {
    string s;
    getline(cin, s);
    auto splitted = split(s, " ");
    for (auto& it : splitted) reverse(it.begin(), it.end());
    for (const auto& it : splitted) cout << it << ' ';
    cout << '\n';
  }
}
