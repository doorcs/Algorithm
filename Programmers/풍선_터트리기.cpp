#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a) {
    int sz = a.size();
    vector<int> rmin(sz);
    int min = 1e9;
    for (int i = sz-1; i > 0; i--) {
        min = min < a[i] ? min : a[i];
        rmin[i] = min;
    }

    int ans = 0;
    min = 1e9;
    for (int i = 0; i < sz; i++) {
        min = min < a[i] ? min : a[i];
        if (a[i] > min && a[i] > rmin[i]) continue;
        ans++;
    }

    return ans;
}
