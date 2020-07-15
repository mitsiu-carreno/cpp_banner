#include "utils.hpp"
#include "abecedario.hpp"

#include <iostream>
#include <string>


int main(){

  std::string input;

  while(true){  
    std::cout << "Ingresa un texto: ";
    // Get line and put it into input
    std::getline(std::cin, input);
    
    char non_valid_char {utils::InvalidCharacters(input)};
    // -1 is known to mean every char is valid
    if(non_valid_char == -1){
      break;
    }else{
      std::cout << "Lo sentimos el caracter " << non_valid_char << " no esta permitido\n";
    }
  }

  for(char letter : input){
    std::cout << letter << "\n";
    // PrintLetters(letter);
  }

  
  PrintLetters();
  
  return 0;
}
