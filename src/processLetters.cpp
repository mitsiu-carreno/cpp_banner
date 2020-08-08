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
		case ' ':
			return ABC::SPCE;
			break;
    default:
      return ABC::SPCE;
	}

}



int PrintLetters(std::vector<std::array <std::string,constants::rows_per_letter>> line, int length){

	for(int r {0}; r < constants::rows_per_letter ; ++r ){
		for(int l {0}; l < length ; ++l ){

				std::cout << line[l][r];

		}
		std::cout << "\n";
	}

//  std::cout << "Line size: " << line.size() << "\n";
//  std::cout << "Stylized char x-size: " << line[0].size() << "\n";
//  std::cout << "Stylized char y-size: " << line[0][1].size() << "\n";
//  std::cout << line[0][0] << line[1][0] << "\n";
//  std::cout << line[0][1] << line[1][1] << "\n";
//  std::cout << line[0][2] << line[1][2] << "\n";
//  std::cout << line[0][3] << line[1][3] << "\n";
//  std::cout << line[0][4] << line[1][4] << "\n";
//  std::cout << line[0][5] << line[1][5] << "\n";
//  std::cout << line[0][6] << line[1][6] << "\n";

	return 0;
}

std::vector<std::array <std::string,constants::rows_per_letter>> SetRowLength (std::string input, int length, int last_char_position){

	std::vector<std::array <std::string,constants::rows_per_letter>> line(length);
  /*
	int i {0};

	for(char letter : input){
		line[i] = SelectLetters(letter);
		++i;
	}
  */
  for(int i{last_char_position}; i < (last_char_position + length); ++i){
    std::cout << "debug" << input[i] << "\n";
    line[i] = SelectLetters(input[i]);
  }

	return line;
}

int ProcessLetters(std::string input, int length){
  int last_char_position = 0;
  for(int renglon {0}; renglon < 2; ++renglon){ 
    std::vector<std::array <std::string, constants::rows_per_letter>> line;
    line = SetRowLength(input, length, last_char_position);

	  PrintLetters(line, length);

    last_char_position = last_char_position + length;
  }
	return 0;
}
