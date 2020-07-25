//#include "abc.hpp"
#include "abc_mayus.hpp"
#include "constants.hpp"
#include "CustomChar.hpp"
#include<iostream>
#include<array>
#include<vector>
#include<string>

std::array <std::string, constants::rows_per_letter> SelectLetters (char letter){
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
		case 'g':
			return ABC::G;
			break;
		case 'h':
			return ABC::H;
			break;
		case 'i':
			return ABC::I;
			break;
		case 'j':
			return ABC::J;
			break;
		case 'k':
			return ABC::K;
			break;
		case 'l':
			return ABC::L;
			break;
		case 'm':
			return ABC::M;
			break;
		case 'n':
			return ABC::N;
			break;
		case 'o':
			return ABC::O;
			break;
		case 'p':
			return ABC::P;
			break;
		case 'q':
			return ABC::Q;
			break;
		case 'r':
			return ABC::R;
			break;
		case 's':
			return ABC::S;
			break;
		case 't':
			return ABC::T;
			break;
		case 'u':
			return ABC::U;
			break;
		case 'v':
			return ABC::V;
			break;
		case 'w':
			return ABC::W;
			break;
		case 'x':
			return ABC::X;
			break;
		case 'y':
			return ABC::Y;
			break;
		case 'z':
			return ABC::Z;
			break;
    default:
      return ABC::Z;
	}

}


int PrintLetters(std::array <std::string, constants::rows_per_letter> letter ){
  
  // Variable que almacena nuestras letras (arreglos de strings) 
  std::vector<std::array <std::string,7>> line(2);
  line[0] = ABC::A;
  
  
  std::cout << "Line size: " << 1 << "\n";
  std::cout << "Stylized char x-size: " << 1 << "\n";
  std::cout << "Stylized char y-size: " << 1 << "\n";
  

  

	return 0;
}


int ProcessLetters(char letter){

	PrintLetters(SelectLetters(letter));
  return 0;
}
