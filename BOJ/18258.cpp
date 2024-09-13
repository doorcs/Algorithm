// duplicate code fragment (83 lines long) 이거 10845번이랑 똑같잖아..
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

template <class T>
class Q {
public:
  void push(T& elem);
  T pop();

  size_t size();
  bool empty();

  T front();
  T back();
private:
  deque<T> data; // std::queue도 내부적으로 std::deque를 활용
};

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  Q<int> q;
  int N; cin >> N;
  while (N--) {
    string qry; cin >> qry;
    if (qry == "push") {
      int val; cin >> val;
      q.push(val);
    } else {
      if (qry == "pop") {
        cout << q.pop() << '\n';
      } else if (qry == "size") {
        cout << q.size() << '\n';
      } else if (qry == "empty") {
        cout << q.empty() << '\n';
      } else if (qry == "front") {
        cout << q.front() << '\n';
      } else { // qry == "back"
        cout << q.back() << '\n';
      }
    }
  }
}

template <class T>
void Q<T>::push(T& elem) {
  data.push_back(elem);
}

template <class T>
T Q<T>::pop() {
  if (data.empty()) return -1;

  T ret = data.front();
  data.pop_front();
  return ret;
}

template <class T>
size_t Q<T>::size() {
  return data.size();
}

template <class T>
bool Q<T>::empty() {
  return (data.empty() ? true : false);
}

template <class T>
T Q<T>::front() {
  if (data.empty()) return -1;
  return data.front();
}

template <class T>
T Q<T>::back() {
  if (data.empty()) return -1;
  return data.back();
}
