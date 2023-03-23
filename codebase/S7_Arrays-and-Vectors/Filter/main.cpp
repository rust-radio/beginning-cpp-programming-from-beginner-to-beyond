#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::vector<int> result;

    std::copy_if(vec.begin(), vec.end(), std::back_inserter(result), [](int x) { return x % 2 == 0; });

    for (auto elem : result) {
        std::cout << elem << " "; // Output: 2 4
    }

    std::cout << std::endl;
    return 0;
}