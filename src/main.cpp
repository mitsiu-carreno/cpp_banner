#include "processInput.hpp"
#include "processLetters.hpp"
#include "utils.hpp"
#include "abc.hpp"

#include <iostream>
#include <string>


int main(){

  std::string input {processInput::AskInput()};

  std::cout << utils::GetWindowLength() << "\n";
  
  for(char letter : input){
    std::cout << letter << "\n";
     ProcessLetters(letter);
  }

  
  
  return 0;
}

