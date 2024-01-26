#include <iostream>
#include <map>
using namespace std;

int main() {
    int f1, f2, f3;
    cin >> f1 >> f2 >> f3;

    map<int, int> mp;
    for(int i=1; i<101; i++) mp[i];

    for(int i=0; i<3; i++){
        int arr, dep;
        cin >> arr >> dep;

        for(int tmp = arr; tmp<dep; tmp++) mp[tmp]++;
    }

    int res = 0; // 꼭 초기화 해주기. 지역변수라서 초기화 안 해주면 쓰레기값이 들어간다
    for(const auto& [key, val]: mp){
        if(val == 1) res += f1;
        else if(val == 2) res += 2*f2;
        else if(val == 3) res += 3*f3;
    }

    cout << res << endl;
}
