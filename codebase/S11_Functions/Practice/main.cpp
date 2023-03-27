#include <iostream>

int main() {
    const int arr[] {1, 2, 3, 4, 5};
    size_t size = 5;

    // Access and print array elements
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}