#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    vector<int> v(10), res(10);
    for(int i=0; i<10; i++){
        cin >> v[i];
        res[i] = v[i]%42;
    }
    sort(res.begin(), res.end()); // `unique()`를 사용하기 전엔 반드시 컨테이너를 정렬해둬야 한다!!
    res.erase(unique(res.begin(), res.end()), res.end());
    
    cout << res.size();
}
