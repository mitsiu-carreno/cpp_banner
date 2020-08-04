#include "processInput.hpp"
#include <string>
#include <iostream>

namespace processInput{

  std::string AskInput(){
    std::string input{};

    while(true){  
      std::cout << "Ingresa un texto: ";
      // Get line and put it into input
      std::getline(std::cin, input);
    
      char non_valid_char {processInput::InvalidCharacters(input)};
      // -1 is known to mean every char is valid
      if(non_valid_char == -1){
        return input;
      }else{
        std::cout << "Lo sentimos el caracter " << non_valid_char << " no esta permitido\n";
      }
    }
  }


  char InvalidCharacters(std::string &input){
  
    for(char &letter : input){
      if(letter >= 'A' && letter <= 'Z'){
        // Turn uppercase letter to lowercase
        letter = letter + 32;
      }
      if(letter != ' ' && (letter < 'a' || letter > 'z')){
        // Anything outside lowercase alphabet is invalid
        return letter;  
      }
    }
    // All characters are valid
    return -1;
  }

  int GetRowLength (std::string input){

	size_t RowLength { input.size() };
	
	RowLength = static_cast<int>(RowLength);
	
	return RowLength;
  }

}
