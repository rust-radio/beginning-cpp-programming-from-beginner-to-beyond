#include <iostream>
#include <vector>

std::vector<int> printArray(int n){
  std::vector<int> newArray{};
  
  for(int i = 1; i <= n; i++){
    newArray.push_back(i);
  }
  
  for (size_t i = 0; i < newArray.size(); i++)
    std::cout << newArray[i];

  std::cout << std::endl;  

  return newArray;
}



int main() {

    printArray(5);
    return 0;
}