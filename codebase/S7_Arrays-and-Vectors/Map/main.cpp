#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    std::transform(vec.begin(), vec.end(), result.begin(), [](int x) { return x * 2; });

    for (auto elem : result) {
        std::cout << elem << " "; // Output: 2 4 6 8 10
    }

    std::cout << std::endl;
    return 0;
}
