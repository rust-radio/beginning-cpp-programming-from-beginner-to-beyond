#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    size_t count {0};
    
    // if (vec.empty()) {
    //     return 0;
    // }
    
    // bool sentinel_found = false;
    // for (size_t i = 0; i < vec.size(); ++i) {
    //     if (vec[i] == -99) {
    //         sentinel_found = true;
    //         break;
    //     }
    // }
    
    // if (!sentinel_found) {
    //     return vec.size();
    // }
    
    while (vec.at(count) != -99 && count < vec.size()) {
        ++count;
    }    
    
    return count;
}

int main () {
    vector <int> vec {};
    // vector <int> vec {1,2,3,4,5,6,-99,10};
    // vector <int> vec {1,2,3,4,5,6,10, 100};
    cout << count_numbers(vec) << endl;
}

