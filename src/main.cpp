#include "processInput.hpp"
#include "processLetters.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>


int main(){

  std::string input {processInput::AskInput()};

  std::cout << utils::GetWindowLength() << "\n";
  
  int length { processInput::GetRowLength(input) };
  
  std::cout << length << "\n";

  int chars_per_row {processInput::GetCharsPerRow (length)};

  std::cout<< "En la ventana caben "<<chars_per_row<<"\n";

  ProcessLetters(input, length);

  return 0;
}

