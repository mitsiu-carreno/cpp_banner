#ifndef PROCESS_LETTERS_H
#define PROCESS_LETTERS_H

#include "constants.hpp"
#include<array>
#include<string>
#include<vector>
int SelectLetters(char letter);

int PrintLetters(std::vector<std::array <std::string,constants::rows_per_letter>> line, int length);

int ProcessLetters(std::string input, int length);

std::vector<std::array <std::string,constants::rows_per_letter>> SetRowLength (std::string input, int length);

#endif
