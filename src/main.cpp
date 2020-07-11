#include <iostream>
#include <string>
#include "Letters.hpp"

int main(){
  
  std::string input {"aei"};
  std::cout << &input << "\n";
  
  for(char e : input){
    std::cout << e << "\n";
  }
  
  Letters();
  
  return 0;
}
