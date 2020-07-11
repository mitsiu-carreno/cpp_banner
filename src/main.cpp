#include <iostream>
#include <string>

int main(){
  
  std::string input {"aei"};
  std::cout << &input << "\n";
  
  for(char e : input){
    std::cout << e << "\n";
  }
  
  return 0;
}
