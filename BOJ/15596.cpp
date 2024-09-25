// 8ms
#include <vector>

long long sum(std::vector<int> &a) {
	long long ret = 0;
    for (const auto& it : a) ret += it;
    return ret;
}

// 4ms
#include <vector>

long long sum(std::vector<int> &a) {
  long long ret = 0;
  for (int i = 0; i < a.size(); i++) ret += a[i]; // size_t 타입을 쓰면 compile error. 왜..?
  return ret;
}

// compile error, 왜???
#include <vector>
#include <numeric>

long long sum(std::vector<int> &a) {
  return std::reduce(a.begin(), a.end());
}

// 마찬가지로 compile error
#include <vector>
#include <numeric>

long long sum(const std::vector<int>& a) {
  // return std::accumulate(a.begin(), a.end(), 0);
  return std::accumulate(a.begin(), a.end(), 0LL);
}
