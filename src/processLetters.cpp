#include "abc_mayus.hpp"
#include "constants.hpp"
#include "CustomChar.hpp"
#include "processInput.hpp"
#include<iostream>
#include<array>
#include<vector>
#include<string>
#include <cmath>

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



void PrintLetters(std::vector<std::array <std::string,constants::rows_per_letter>> &ref_line, int chars_per_row){

	for(int row {0}; row < constants::rows_per_letter ; ++row ){
		for(size_t letter {0}; letter < ref_line.size() ; ++letter ){

				std::cout << ref_line[letter][row];

		}
		std::cout << "\n";
	}

//  std::cout << "Line size: " << ref_line.size() << "\n";
//  std::cout << "Stylized char x-size: " << ref_line[0].size() << "\n";
//  std::cout << "Stylized char y-size: " << ref_line[0][1].size() << "\n";
//  std::cout << ref_line[0][0] << ref_line[1][0] << "\n";
//  std::cout << ref_line[0][1] << ref_line[1][1] << "\n";
//  std::cout << ref_line[0][2] << ref_line[1][2] << "\n";
//  std::cout << ref_line[0][3] << ref_line[1][3] << "\n";
//  std::cout << ref_line[0][4] << ref_line[1][4] << "\n";
//  std::cout << ref_line[0][5] << ref_line[1][5] << "\n";
//  std::cout << ref_line[0][6] << ref_line[1][6] << "\n";

}


void FillRow (std::string input, int last_char_position, std::vector<std::array<std::string, constants::rows_per_letter>> *ptr_line){

	for (int i{last_char_position}, line_i{0}; i < (last_char_position + static_cast<int>((*ptr_line).size())); ++i, ++line_i)	
	{
		(*ptr_line)[line_i] = SelectLetters(input[i]);
	}
}

int GetCurrentLineLength(int remain_input_size, int chars_per_row){
  int line_length = chars_per_row;
  if(remain_input_size < chars_per_row){
    line_length = remain_input_size;
  }else{
    line_length = chars_per_row;
  }
  return line_length;
}

void ProcessLetters(std::string input, int chars_per_row){
  int last_char_position = 0;
  for(int renglon {0}; renglon < ceil(input.size()/static_cast<float>(chars_per_row)); ++renglon){ 
    int remain_input_size = static_cast<int>(input.size()) - last_char_position;

    // std::cout << "remaining chars : " << remain_input_size << "\n";

    int chars_per_current_row = GetCurrentLineLength(remain_input_size, chars_per_row); 

    std::vector<std::array <std::string, constants::rows_per_letter>> line(chars_per_current_row);

		FillRow(input, last_char_position, &line);

		PrintLetters(line, chars_per_current_row);
    std::cout << "\n";

    last_char_position = last_char_position + chars_per_current_row;
  }
}
