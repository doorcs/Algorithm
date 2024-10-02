// lower_bound의 특성을 활용해 개선한 풀이(44ms):
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lower_bound(vector<int>& v, ll val) {
  ll fr = 0, rr = v.size()-1;
  while (fr <= rr) {
    ll mid = fr + (rr-fr)/2;
    if (v[mid] < val) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<string> names(N); // map -> vector
  vector<int> vec(N);
  for (int i = 0; i < N; ++i) cin >> names[i] >> vec[i];
  // lower_bound의 경우 주어진 값보다 `크거나 같은` 첫번째 값을 반환하기 때문에, 중복값을 가지는 경우 항상 여러 개 중 첫번째 값만 반환한다.
  // {100, 100, 333} 에서 lower_bound를 수행할 경우, 100 이하 값에 대해서는 `항상` 첫번째 100을 반환함!!!
  // 따라서 별도의 중복 처리는 필요하지 않다

  while (M--) {
    int qry;
    cin >> qry;
    cout << names[lower_bound(vec, qry)] << '\n';
  }
}

/* 첫 풀이(lower_bound의 특성을 제대로 활용하지 못해 비효율적인 풀이, 72ms):

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lower_bound(vector<int>& v, ll val) {
  ll fr = 0, rr = v.size()-1;
  while (fr <= rr) {
    ll mid = fr + (rr-fr)/2;
    if (v[mid] < val) {
      fr = mid+1;
    } else {
      rr = mid-1;
    }
  }
  return fr;
}

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  unordered_map<int, string> names; // 값이 항상 순서대로 주어지기 때문에, map 대신 vector를 활용할 수 있었음
  unordered_map<int, int> dup; // 사실 이 부분은 필요없었다! lower_bound이기 때문..
  vector<int> vec;
  int idx = 0;
  while (N--) {
    string name;
    int cut;
    cin >> name >> cut;
    if (dup[cut]) continue;

    dup[cut]++;
    names[idx++] = name;
    vec.push_back(cut);
  }

  while (M--) {
    int qry;
    cin >> qry;
    cout << names[lower_bound(vec, qry)] << '\n';
  }
}

*/
