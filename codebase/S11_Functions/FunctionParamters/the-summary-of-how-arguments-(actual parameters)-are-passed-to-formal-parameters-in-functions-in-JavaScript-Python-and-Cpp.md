# summary of how arguments (actual parameters) are passed to formal parameters in functions in JavaScript, Python, and C++

## In JavaScript:

-   Arguments are passed by value, but when the argument is an object or an array, the reference to that object or array is passed by value. This means that changes made to the object or array inside the function will affect the original object or array outside the function.

**Example:**

```js
function foo(x, y) {
  x = x + 1;
  y.push(2);
}

let a = 1;
let b = [1];
foo(a, b);
console.log(a); // 1
console.log(b); // [1, 2]

```

-   In JavaScript, primitive types such as numbers and strings are also passed by value

```
function increment(x) {
  x += 1;
  console.log("x inside function:", x);
}

let y = 5;
console.log("y before function call:", y); // y before function call: 5
increment(y); // x inside function: 6
console.log("y after function call:", y); // y after function call: 5
```

-   for objects and arrays, a reference to the original object is passed to the function.

```js
function addToList(lst, item) {
  lst.push(item);
  console.log("lst inside function:", lst);
}

let myList = [1, 2, 3];
console.log("myList before function call:", myList); // myList before function call: [1, 2, 3]
addToList(myList, 4); // lst inside function: [1, 2, 3, 4]
console.log("myList after function call:", myList); // myList after function call: [1, 2, 3, 4]
```

##  In Python:

-   Arguments are passed by assignment. This means that when an argument is passed to a function, the parameter is assigned a reference to the object passed as the argument. If the argument is mutable (e.g. a list or a dictionary), changes made to the object inside the function will affect the original object outside the function.

**Example:**

```py
def foo(x, y):
  x = x + 1
  y.append(2)

a = 1
b = [1]
foo(a, b)
print(a) # 1
print(b) # [1, 2]
```

- For immutable types such as numbers, strings, and tuples

```
def increment(x):
    x += 1
    print("x inside function:", x)

y = 5
print("y before function call:", y) # y before function call: 5
increment(y) # x inside function: 6
print("y after function call:", y) # y after function call: 5
```

-   for mutable types such as lists and dictionaries

```
def add_to_list(lst, item):
    lst.append(item)
    print("lst inside function:", lst)

my_list = [1, 2, 3]
print("my_list before function call:", my_list) # my_list before function call: [1, 2, 3]
add_to_list(my_list, 4) # lst inside function: [1, 2, 3, 4]
print("my_list after function call:", my_list) # my_list after function call: [1, 2, 3, 4]
```

## In C++:

-   Arguments can be passed by value, by reference, or by pointer. When an argument is passed by value, a copy of the argument is made and passed to the function. When an argument is passed by reference, a reference to the original argument is passed to the function, and changes made to the parameter inside the function will affect the original argument outside the function. When an argument is passed by pointer, a pointer to the original argument is passed to the function, and changes made to the parameter inside the function will affect the original argument outside the function.

**Example:**

```C++
#include <iostream>

void foo(int x, int& y, int* z) {
  x = x + 1;
  y = y + 1;
  *z = *z + 1;
}

int main() {
  int a = 1;
  int b = 1;
  int c = 1;
  foo(a, b, &c);
  std::cout << a << std::endl; // 1
  std::cout << b << std::endl; // 2
  std::cout << c << std::endl; // 2
  return 0;
}
```

-   Function Parameters and the return Statement
```
// Section 11
// Function Parmameters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}
```

