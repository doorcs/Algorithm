#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n); // v{n}이 아니라 v(n)!! // v{n}을 하면 n만큼의 크기를 할당받는게 아니라 원소로 n 하나를 넣고 끝이다

    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(const auto& it: v) cout << it << endl;
}
