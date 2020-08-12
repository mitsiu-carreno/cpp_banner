#include "processInput.hpp"
#include "processLetters.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>

int main(){
  //VerifMinWindow
	if(!processInput::CheckWindowLength(utils::GetWindowLength())){
		std::cout << "Por favor amplia el tamaño de tu ventana... \n";
	}
	
	std::string input {processInput::AskInput()};

  int length = input.size();  
	//int length { processInput::GetRowLength(input) };
	
	int chars_per_row {processInput::GetCharsPerRow (length)};
	
	std::cout<< "En la ventana caben "<<chars_per_row<<"\n";

  if(static_cast<int>(input.size()) < chars_per_row){
    chars_per_row = static_cast<int>(input.size());
  }  

	ProcessLetters(input, chars_per_row);
	
	return 0;
}
