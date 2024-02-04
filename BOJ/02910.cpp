#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int N, C;
    cin >> N >> C;

    vector<int> v; // 들어온 순서대로 중복 없이 저장 -> sort한 뒤 출력할 예정
    map<int, int> mp; // 값을 key로, 빈도를 value로 하는 map
    map<int, int> ord; // 값을 key로, 값이 들어온 순서를 value로 하는 map
    int idx = 1;

    while(N--){
        int tmp;
        cin >> tmp;
        if(mp.find(tmp) == mp.end()){
            v.push_back(tmp);
            mp.insert({tmp, 1});
            ord.insert({tmp, idx++});
        }
        else mp[tmp]++;
    }

    sort(v.begin(), v.end(), [&mp, &ord](int a, int b){ // `mp`, `ord` 두 map을 reference로 캡쳐
        if(mp[a] == mp[b]) return ord[a] < ord[b];
        return mp[a] > mp[b];
        });

    for(auto it: v){
        for(int i=0; i<mp[it]; i++) cout << it << ' ';
    }
}
