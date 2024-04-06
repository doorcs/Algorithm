#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> vi(N);
        for(int i=0; i<N; i++) cin >> vi[i];

        int currmax = *vi.rbegin();
        ll res{};
        for(auto rit=vi.rbegin()+1; rit<vi.rend(); rit++){
            int curr = *rit;
            if(curr>currmax) currmax = curr;
            else res += currmax - curr;
        }

        cout << res << '\n';
    }
}
