#include <array>
#include <iostream>

/*
  Insertion Sort Algorithm
  Sorts an array of Type numeric values in order.

  Parameters:
    arr: Array of Type numeric values to be sorted.
*/

template <typename Type,
          std::size_t N> // size_t is non-signed (0 or positive values only)
void insertion_sort(std::array<Type, N> &arr) {

  // Traverse through 1 to N
  for (std::size_t i = 1; i < N; i++) {
    // Gets the current value to be positioned
    Type temp = arr[i];
    // Initialize j as the i index value
    std::size_t j = i;

    /*
      Increasing order: previous value is greater than current value
      Decreasing order: previous value is less than current value
    */

    // Shift elements of arr[0..i-1]
    while (j > 0 && arr[j - 1] > temp) {
      arr[j] = arr[j - 1];
      // Decrease j index
      --j;
    }
    // Place temp (the current value) in its correct position
    arr[j] = temp;
  }
}

// Implementation
int main() {
  std::array<int, 10> numeros{2, 1, 2, 0, 2, 45, 12, 20, 1, 9};

  std::cout << "Started Array" << std::endl;
  for (auto num : numeros) {
    std::cout << num << " ";
  }

  insertion_sort(numeros); // Applied sorting algorithm (Insertion Sort)

  std::cout << "\nSorted Array" << std::endl;
  for (auto num : numeros) {
    std::cout << num << " ";
  }

  return 0;
}