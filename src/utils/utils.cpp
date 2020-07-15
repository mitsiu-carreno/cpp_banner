#include<iostream>
#include <string>

namespace utils{

  bool InputCheck () {
	  if(std::cin.fail()){
		  std::cin.clear();
		  std::cin.ignore(32767, '\n');
		  return false;
	
	  }else{
		  std::cin.ignore(32767,'\n');
		  return true;
	
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
}
