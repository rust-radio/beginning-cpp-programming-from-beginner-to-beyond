// Section 9
// Range-based For Loop
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> count_divisible() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    vector<int> count {};
    
    for (auto v : vec) {
        if (v % 3 == 0 || v % 5 == 0) {
            count.push_back(v);
        }
    }

    for (auto c: count)
        cout << c << " ";
    
    return count;
}

int main() {
   
    // int scores[] {10, 20, 30};
    
    // for (auto score: scores)
    //     cout << score << endl;
        
//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temp {};
//    double total {};
   
//    for (auto temp: temperatures)
//        total += temp;
   
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
     
//    cout << fixed << setprecision(1);
//    cout << "Average temperature is " << average_temp << endl;
        
//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

//    for (auto c: "This is a test")
//        if (c != ' ')
//            cout << c;

//    cout <<  endl;

//    for (auto c: "This is a test")
//       if (c == ' ')
//           cout << "\t";
//        else
//            cout << c;

count_divisible();            
        
    cout <<  endl;
    return 0;
}

