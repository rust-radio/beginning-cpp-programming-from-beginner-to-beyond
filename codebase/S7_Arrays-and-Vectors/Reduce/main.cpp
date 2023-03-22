#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};

    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << sum << std::endl; // Output: 15

    int product = std::accumulate(vec.begin(), vec.end(), 1, [](int a, int b) { return a * b; });
    std::cout << product << std::endl; // Output: 120

    std::cout << std::endl;
    return 0;
}