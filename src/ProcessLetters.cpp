//#include "abc.hpp"
#include "abc_mayus.hpp"
#include "constants.hpp"
#include "CustomChar.hpp"
#include<iostream>
#include<array>
#include<string>

std::array <const std::string, constants::rows_per_letter> SelectLetters (char letter){
	switch (letter) {
		case 'a':
			return ABC::A;
			break;
		case 'b':
			return ABC::B;
			break;
		case 'c':
			return ABC::C;
			break;
		case 'd':
			return ABC::D;
			break;
		case 'e':
			return ABC::E;
			break;
		case 'f':
			return ABC::F;
			break;
		case 'i':
			return ABC::I;
			break;
		case 'o':
			return ABC::O;
			break;
    default:
      return ABC::Z;
	}

}


int PrintLetters(std::array <const std::string, constants::rows_per_letter> letter ){
	for (std::size_t i{0};i < letter.size();++i){
 	 std::cout<< letter[i]<<"\n";
	}
	return 0;
}


int ProcessLetters(char letter){

	PrintLetters(SelectLetters(letter));
  return 0;
}
