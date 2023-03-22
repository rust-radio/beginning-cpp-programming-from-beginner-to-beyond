# How to replicate map, filter and reduce behaviors in C++ using STL?

-   [How to replicate map, filter and reduce behaviors in C++ using STL?](https://stackoverflow.com/questions/40901615/how-to-replicate-map-filter-and-reduce-behaviors-in-c-using-stl#:~:text=You%20can%20use%20std%3A%3A,to%20demonstrate%20common%20use%20cases.)

**ChatGPT:** In C++, you can replicate the behavior of map, filter, and reduce using the STL algorithms. Here are some examples:

1.  Map:

Map is used to apply a function to each element in a container and return a new container with the modified elements. In C++, you can use the `std::transform` algorithm to achieve this.

```c++
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

    return 0;
}
```

2. Filter:

Filter is used to select elements from a container that satisfy a given condition and return a new container with the selected elements. In C++, you can use the `std::copy_if` algorithm to achieve this.

```C++
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

    return 0;
}
```

3. Reduce:

Reduce is used to accumulate the elements of a container into a single value. In C++, you can use the `std::accumulate` algorithm to achieve this.

```C++
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};

    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << sum << std::endl; // Output: 15

    int product = std::accumulate(vec.begin(), vec.end(), 1, [](int a, int b) { return a * b; });
    std::cout << product << std::endl; // Output: 120

    return 0;
}
```

In the above examples, we used the following STL algorithms:

-   `std::transform`: applies a function to each element of a container and returns a new container with the modified elements.
-   `std::copy_if`: selects elements from a container that satisfy a given condition and returns a new container with the selected elements.
-   `std::accumulate`: accumulates the elements of a container into a single value.

<details>
  <summary> How to replicate map, filter and reduce behaviors in C++ using STL? </summary>

  -   using `g++`
  ```
  g++ -Wall -std=c++14 main.cpp  
  ```

  - [Codebase: Section 7: Arrays and Vectors - Map](Map)
  - [Codebase: Section 7: Arrays and Vectors - Filter](Filter)
  - [Codebase: Section 7: Arrays and Vectors - Reduce](Reduce)

</details>