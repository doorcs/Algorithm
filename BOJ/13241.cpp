#include <bits/stdc++.h>

using ll = long long;
using namespace std;
namespace ran = std::ranges;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    ll A, B; cin >> A >> B;
    cout << A*B / gcd(A, B); // (C++17) std::lcm()을 안 쓰는건 마지막 양심이랄까
}

// euclidean algorithm:

// ll gcd(ll A, ll B) {
//   if (B == 0) return A;
//   return gcd(B, A%B);
// }
