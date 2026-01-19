#include <array>
#include <cstddef>
#include <iostream>

template <typename T, std::size_t N>
int horner(const std::array<T, N> &coefficients, int x) {
  int p{0};
  for (std::size_t i = N; i > 0; i--) {
    p = coefficients[i - 1] + x * p;
  }
  return p;
}

int main() {
  std::array<int, 5> numeros{1, 2, 3, 4, 5};
  int result = horner(numeros, 10);
  std::cout << result << std::endl;
  return 0;
}