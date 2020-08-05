#ifndef PROCESSINPUT_H
#define PROCESSINPUT_H

#include <string>

namespace processInput{
  std::string AskInput();
  char InvalidCharacters(std::string &input);
  int GetRowLength(std::string input);
  int GetCharsPerRow ( int lenght );
}

#endif
