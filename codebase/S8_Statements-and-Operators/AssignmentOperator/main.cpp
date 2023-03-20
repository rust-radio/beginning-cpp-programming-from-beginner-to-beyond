// Section 8
// Assignment operator (=)

#include <iostream>

using namespace std;

int main() {
    
    int num1 {10};
    int num2 {20};
    
    num1 = 100;
    num1 = num2;
    num1 = num2 = 2000;
   // num = 100;
   // num2 = "frank";
   // 100 = num1;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    cout << "num2 = 2000 is " << (num2 = 2000) << endl;

    cout << endl;
    return 0;
}

