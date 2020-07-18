#ifndef PROCESS_LETTERS_H
#define PROCESS_LETTERS_H

#include "constants.hpp"
#include<array>
#include<string>

int SelectLetters(char letter);

int PrintLetters(std::array <std::string, constants::rows_per_letter> letter);

int ProcessLetters(char letter);

#endif
