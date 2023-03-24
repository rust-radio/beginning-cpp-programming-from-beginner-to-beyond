#include <iostream>
#include <string>

int main () {
    std::string part1 {"C++"};
    std::string part2 ("is a powerful");
    std::string part3 = " language" ;
    std::string sentence;

    sentence = part1 + part2;
    sentence = "C++" + part3;

    //sentence = "C++" + " language";

    std::cout << sentence << std::endl; 

    std::string s1 {"Frank"};

    for (auto c: s1)
        std::cout << c << std::endl;
}