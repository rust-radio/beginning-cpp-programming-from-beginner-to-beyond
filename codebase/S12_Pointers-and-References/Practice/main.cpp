#include<iostream>

using namespace std;

int main () {
    int score {10};
    double high_temp {100.7};

    int *score_ptr {nullptr};
    double *high_temp_ptr {nullptr};

    score_ptr = &score;
    high_temp_ptr = &high_temp;

    cout << "score_ptr is : " << score_ptr << endl;
    cout << "high_temp_ptr is : " << high_temp_ptr << endl;

    return 0;
}


