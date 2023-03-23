# Deep in `std::for_each` algorithm vs range-based for loop?

**ChatGPT:** The `std::for_each` algorithm and range-based for loop are both used to iterate over the elements of a container and perform some operation on each element. However, there are some differences between them.

The `std::for_each` algorithm is a part of the C++ Standard Library and takes a range of elements and a function object as arguments. The function object is applied to each element in the range, and the algorithm returns the function object. Here is an example:

```C++
std::vector<int> numbers = {1, 2, 3, 4, 5};

struct MultiplyByTwo {
    void operator()(int& num) const {
        num *= 2;
    }
};

std::for_each(numbers.begin(), numbers.end(), MultiplyByTwo());
```

In this example, the `std::for_each` algorithm is used to apply the `MultiplyByTwo` functor to each element in the `numbers` vector. The `MultiplyByTwo` functor is defined as a struct with an overloaded `()` operator that multiplies its argument by 2.

The range-based for loop, on the other hand, is a language feature introduced in C++11 that allows you to iterate over the elements of a container and perform some operation on each element. Here is an example:

```C++
std::vector<int> numbers = {1, 2, 3, 4, 5};

for (int& num : numbers) {
    num *= 2;
}
```

In this example, the range-based for loop is used to iterate over the elements of the `numbers` vector and multiply each element by 2.

One advantage of the `std::for_each` algorithm is that it can be more expressive and flexible, as it allows you to pass in any function object as the third argument. This can be useful if you want to perform a complex operation on each element, or if you want to reuse the same operation on multiple containers. The range-based for loop, on the other hand, is more concise and easier to read, especially for simple operations.

Overall, the choice between `std::for_each` and the range-based for loop depends on the specific use case and personal preference.

<details>
  <summary> How to replicate for_each, range_based_forloop, map, filter and reduce behaviors in C++? </summary>

  -   using `g++`
  ```
  g++ -Wall -std=c++14 main.cpp  
  ```

  - [Codebase: Section 7: Arrays and Vectors - Map](Map)
  - [Codebase: Section 7: Arrays and Vectors - Filter](Filter)
  - [Codebase: Section 7: Arrays and Vectors - Reduce](Reduce)
  - [Codebase: Section 7: Arrays and Vectors - std-for_each](std-for_each)
  - [Codebase: Section 7: Arrays and Vectors - RangeBasedForLoop](range-based-for-loop)
  - [Codebase: Section 9: Controlling Program Flow - RangeBasedForLoop](../S9_Controlling-Program-Flow/RangeBasedForLoop/)
</details>