#include <array>
#include <cstddef>
#include <iostream>

/*
  Linear Search Algorithm
  Searches for a target value within an array of Type numeric values.

  Parameters:
    arr: Array of Type numeric values to be searched.
    target: The Type numeric value to search for.

  Returns:
    The index of the target value if found; otherwise, returns -1.
*/
template <typename T, std::size_t N>
constexpr std::size_t linear_search(std::array<T, N> &arr, T target) {
  for (std::size_t i = 0; i < N; i++) {
    if (target == arr[i])
      return i;
  }
  // Safe cast conversion
  return static_cast<std::size_t>(-1); // Not found
}

// Implementation
int main() {
  std::array<int, 10> numeros{2, 1, 2, 0, 2, 45, 12, 20, 1, 9};
  int target = 3;
  int result = static_cast<int>(linear_search(numeros, target));

  if (result == -1) {
    std::cout << "Target " << target << " not found in the array." << std::endl;
    return 0;
  }
  std::cout << "Target " << target << " found at index: " << result
            << std::endl;
}