#include "abc.hpp"
#include "constants.hpp"
#include "CustomChar.hpp"
#include <iostream>
#include <array>
#include<string>
#include vector


void Process_line (std::vector<char> &sentence_char, std::string input){
	for(size_t i {0}; i<input.size(); ++i)
	sentence_char[i]=input[i];

	// hacer arreglo de arreglos, donde en lugar de guardar el carácter guardo el arreglo de líneas 
}

void Print_line (char letter, std::string input){
	std::vector<char> sentence_char (input.size());
	Process_line (sentence_char,input);
	for (size_t i{0};i<input.size(); ++i){

		//hola 
	//1er ciclo posición por posición en el input 
		//cuando la posición1 (h)== character x , imprimir linea 1 del caracter x
		//cuando la posición 2 (o)== character x , imprimir linea 1 del caracter x
		//cuando la posición 3 (l)== character x , imprimir linea 1 del caracter x
		//cuando la posición 4 (a)== character x , imprimir linea 1 del caracter x + salto de línea

		//cuando la posición1 (h)== character x , imprimir linea 2 del caracter x
		//cuando la posición 2 (o)== character x , imprimir linea 2 del caracter x
		//cuando la posición 3 (l)== character x , imprimir linea 2 del caracter x
		//cuando la posición 4 (a)== character x , imprimir linea 2 del caracter x + salto de línea

	}
}


int ProcessLetters(char letter){

	PrintLetters(SelectLetters(letter));
  return 0;
}


std::array <const std::string, constants::rows_per_letter> SelectLetters (char letter){
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
    default:
      return abc::letter_a;
	}

}


int PrintLetters(std::array <const std::string, constants::rows_per_letter> letter ){
	for (std::size_t i{0};i < letter.size();++i){
 	 std::cout<< letter[i]<<"\n";
	}
	return 0;
}


