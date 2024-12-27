#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  while (N--) {
    vector<int> v(10);
    for (auto& it : v) cin >> it;
    sort(v.begin(), v.end());
    cout << v[7] << '\n';
  }    
}

// using lambda expression to sort desc:

// sort(v.begin(), v.end(), [](auto a, auto b) {
//   return a > b;
// });
// cout << v[2] << '\n';


/* alternative approach using C array:

#include <algorithm>
#include <iostream>

int arr[10];

int main() {
  int N;
  std::cin >> N;
  while (N--) {
    for (int i = 0; i < 10; i++) std::cin >> arr[i];
    std::sort(arr, arr + 10);
    std::cout << arr[7] << '\n';
  }
}

*/
