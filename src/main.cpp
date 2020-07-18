#include "processInput.hpp"
#include "abecedario.hpp"
#include "utils.hpp"

#include <iostream>
#include <string>


int main(){

  std::string input {processInput::AskInput()};

  std::cout << utils::GetWindowLength() << "\n";
  

  for(char letter : input){
    std::cout << letter << "\n";
     PrintLetters(letter);
  }

  
  
  return 0;
}

