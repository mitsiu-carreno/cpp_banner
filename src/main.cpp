#include <iostream>
#include "test.h"

void fun();

int main(){
	Test t;
	t.working = true;
	t.still_working = true;
  std::cout << "Banner working ? " << t.working << t.still_working << "\n";
  fun();
  return 0;
}
