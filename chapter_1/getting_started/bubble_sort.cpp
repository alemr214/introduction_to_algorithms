#include <array>
#include <iostream>

/*
  Bubble Sort Algorithm
  Sorts an array of Type numeric values in order.

  Parameters:
    arr: Array of Type numeric values to be sorted.
*/
template <typename T, std::size_t N> void bubble_sort(std::array<T, N> &arr) {
  // Starts from the beginning of the array and repeatedly steps through
  for (std::size_t i = 0; i < N - 1; i++) {
    // Compares adjacent elements and swaps them if they are in the wrong order.
    for (std::size_t j = N - 1; j > i; j--) {
      if (arr[j] < arr[j - 1]) {
        std::swap(arr[j], arr[j - 1]);
      }
    }
  }
}

// Implementation
int main() {
  std::array<int, 5> arr = {64, 34, 25, 12, 22};

  bubble_sort(arr);

  std::cout << "Sorted array: \n";
  for (const auto &elem : arr) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;

  return 0;
}