#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use a range-based for loop to multiply each element by 2
    for (int& num : numbers) {
        num *= 2;
    }

    // Print the modified vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
