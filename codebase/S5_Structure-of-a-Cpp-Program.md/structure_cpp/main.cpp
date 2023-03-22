#include <iostream>

int main() 
{
    int faverite_number;
    
    std::cout << "Enter your favorite number between 1 and 100:";
    
    std::cin >> faverite_number;

    std::cout << "Amazing!! That's my favorite number too!" <<std::endl;
    
    std::cout << "No really!! " + std::to_string(faverite_number) + " That's my favorite number too!" <<std::endl;
    
    return 0;
}
