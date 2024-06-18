#include <bits/stdc++.h>

namespace ran = std::ranges;
using namespace std;
using ll = long long;

unordered_map<string, pair<ll, ll>> mp{
  {"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}},
  {"orange", {3, 1'000}}, {"yellow", {4, 10'000}}, {"green", {5, 100'000}},
  {"blue", {6, 1'000'000}}, {"violet", {7, 10'000'000}}, {"grey", {8, 100'000'000}},
  {"white", {9, 1'000'000'000}}
};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  string fi, se, th; cin >> fi >> se >> th;

  cout << (mp[fi].first*10 + mp[se].first) * mp[th].second;
}
