#include <iostream>
#include <vector>
#include <algorithm>

void print_element(int n) {
    std::cout << n << " ";
}

int main() {
    std::vector<int> v {1, 2, 3, 4, 5};

    // Apply the print_element function to each element in the vector
    std::for_each(v.begin(), v.end(), print_element);
    std::cout << std::endl;

    return 0;
}
