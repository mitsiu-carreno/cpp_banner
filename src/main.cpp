#include <iostream>
#include <string>
#include "abecedario.hpp"

int main(){
  
  std::string input {"aei"};
  std::cout << &input << "\n";
  
  for(char e : input){
    std::cout << e << "\n";
  }
  
  PrintLetters();
  
  return 0;
}
