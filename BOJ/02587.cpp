#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // accumulate(begin, end, initial value)
using namespace std;

int main() {
    vector<int> v(5);

    int i=5;
    while(i--) cin >> v[i]; // 어차피 정렬하기 때문에 타자 적게 치는 방식을 시도

    sort(v.begin(), v.end());
    cout << accumulate(v.begin(), v.end(), 0)/5 << endl << v[2] << endl;
}
