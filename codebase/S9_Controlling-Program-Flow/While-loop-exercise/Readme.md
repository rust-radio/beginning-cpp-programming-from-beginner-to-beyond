#  While loop exercise

Given a vector of integers, determine how many integers are present before you see the value `-99` . Note, it's possible `-99`  is not in the vector! If `-99`  is not in the vector then the result will be equal to the number of elements in the vector.

The final result should be stored in an integer variable named `count` .

Note that you the different vectors will be tested against your code. You do not need to declare the vector of integers. `vec`  is the name of the vector you should use.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.

-    The correct solution
```C++
#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    
    while (count < vec.size() && vec.at(count) != -99) {
        ++count;
    }   

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
```

-   The solution with potential issues.
```C++
#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    
    while (vec.at(count) != -99 && count < vec.size()) {
        ++count;
    }   

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
```

The code compiles and runs without any syntax or logical errors. It defines a function called count_numbers that takes a constant reference to a vector of integers as input, counts the number of integers in the vector up to and including the first occurrence of -99, and returns that count.

However, there may be some potential issues that are not evident from the code itself. For example, if the input vector is empty, the program will attempt to access an element of the vector that does not exist, which could result in a **segmentation fault**. Additionally, if the input vector does not contain -99, the function will return the size of the vector, which may not accurately represent the number of integers up to and including the last element of the vector. 
`vec.at(count)` - cause `libc++abi: terminating with uncaught exception of type std::out_of_range: vector`

- the solution by ChatGPT to above erros
```C++
int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    
    if (vec.empty()) {
        return 0;
    }
    
    bool sentinel_found = false;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == -99) {
            sentinel_found = true;
            break;
        }
    }
    
    if (!sentinel_found) {
        return vec.size();
    }
    
    while (vec.at(count) != -99 ) {
        ++count;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
```

<details>
  <summary> While loop exercise </summary>

  -   using `g++`
  ```
  g++ -Wall -std=c++14 main.cpp  
  ```
  - using `-Wextra` and `-Wpedantic` options enable additional warning checks beyond the `-Wall` option, e.g. `-Wmisleading-indentation`
  ```
  g++ -Wall -Wextra -Wpedantic -Wmisleading-indentation -std=c++17 main.cpp
  ```

  - [Codebase: While loop exercise - main.cpp](./main.cpp)

</details>


