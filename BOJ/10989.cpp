#include <iostream>
using namespace std;

int v[10003]; // 입력 갯수만큼의 크기를 갖는 큰 배열이 아니라, 입력값의 범위를 커버할 수 있는 크기의 배열로도 충분한 상황!

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        v[tmp]++;
    };

    for(int i=1; i<10001; i++) {
        for(int j=0; j<v[i]; j++){
            cout << i << '\n';
        }
    }
}

// 삽질 1
// vector<int> v(N);
// for(int i=0; i<N; i++) cin >> v[i];
// sort(v.begin(), v.end());
// for(const auto& it: v) cout << it << '\n';

// 삽질 2
// int* arr = new int[N];
// for(int i=0; i<N; i++) cin >> arr[i];
// sort(arr, arr+N);
// for(int i=0; i<N; i++) cout << arr[i] << '\n';
