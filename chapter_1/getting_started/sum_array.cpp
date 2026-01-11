#include <array>
#include <cstddef>
#include <iostream>
#include <ostream>

/*
  Sum Array Algorithm
  This algorithm takes an array of numeric values and returns the sum of all
  elements in the array.

  Arguments:
    arr: An array of Type numeric values and size N.
  Returns:
    The sum of all elements in the array.
*/
template <typename Type, std::size_t N>
constexpr Type sum_arr(std::array<Type, N> &arr) {
  Type sum{0};
  // Takes every value in the array
  for (auto val : arr) {
    // Sums them up
    sum += val;
  }
  return sum;
}

int main() {

  std::array<double, 5> values{.1, .2, .3, .4, .5};
  double sum_values = sum_arr(values);
  std::cout << "Sum of values is: " << sum_values << std::endl;
  return 0;
}