#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  int hour, min, tmp;
  cin >> hour >> min >> tmp;

  hour += (min + tmp) / 60;
  min = (min + tmp) % 60;

  cout << (hour % 24) << ' ' << min;
}
