#include <iostream>

int main() {
  int N;
  std::cin >> N;
  for (int i = 1; i < N+1; i++) {
    int a, b;
    std::cin >> a >> b;
    std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << '\n';
  }
}
