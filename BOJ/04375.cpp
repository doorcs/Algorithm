#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    while(cin >> N){
        int num = 1;
        int len = 1;

        while(num % N != 0){
            num = (num*10 + 1)%N;
            len++;
        }

        cout << len << '\n';
    }
}
