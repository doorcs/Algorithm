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

/*

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  deque<int> dq;
  int N; cin >> N;
  cin.ignore();
  while (N--) {
    string qry;
    getline(cin, qry);
    if (qry.size() > 5) {
      dq.push_back(stoi(qry.substr(5)));
    } else if (qry == "size") {
      cout << dq.size() << '\n';
    } else if (qry == "empty") {
      cout << (dq.empty() ? 1 : 0) << '\n';
    } else if (qry == "front") {
      if (dq.empty()) {
        cout << -1 << '\n';
      } else {
        cout << dq.front() << '\n';
      }
    } else if (qry == "back") {
      if (dq.empty()) {
        cout << -1 << '\n';
      } else {
        cout << dq.back() << '\n';
      }
    } else { // qry == "pop"
      if (dq.empty()) {
        cout << -1 << '\n';
      } else {
        cout << dq.front() << '\n';
        dq.pop_front();
      }
    }
  }
}

*/

/* 파이썬

import sys
input = sys.stdin.readline

q = []

N = int(input().rstrip())
for _ in range(N):
    qry = input().rstrip()
    if qry.startswith('push'):
        _, val = qry.split()
        q.append(int(val))
    elif qry == 'size':
        print(len(q))
    elif qry == 'empty':
        if len(q) == 0:
            print(1)
        else:
            print(0)
    elif qry == 'front':
        if len(q) == 0:
            print(-1)
        else:
            print(q[0])
    elif qry == 'back':
        if len(q) == 0:
            print(-1)
        else:
            print(q[len(q)-1])
    elif qry == 'pop':  # else로 처리하는것보다 무려 12ms 빠름 ( 52ms -> 40ms )
        if len(q) == 0:
            print(-1)
        else:
            print(q[0])
            q = q[1:]

  */
