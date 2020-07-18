#include "abc.hpp"
#include "constants.hpp"
#include "CustomChar.hpp"
#include <iostream>
#include <array>
#include<string>

std::array <std::string, constants::rows_per_letter> SelectLetters (char letter){
	switch (letter) {
		case 'a':
			return abc::letter_a;
			break;
		case 'e':
			return abc::letter_e;
			break;
		case 'i':
			return abc::letter_i;
			break;
		case 'o':
			return abc::letter_o;
			break;
	}

}


int PrintLetters(std::array <std::string, constants::rows_per_letter> letter ){
	for (std::size_t i{0};i < letter.size();++i){
 	 std::cout<< letter[i]<<"\n";
	}
	return 0;
}


int ProcessLetters(char letter){

	PrintLetters(SelectLetters(letter));

}
