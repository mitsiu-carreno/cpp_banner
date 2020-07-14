#include <iostream>
#include <array>
#include "CustomChar.hpp"

int PrintLetters (){

CustomChar a {};
a.ancho=6;
a.linea1= ".         .\n";
a.linea2 =".  ______ .\n";
a.linea3 = ". / ___  /.\n";
a.linea4 = "./ /__/ / .\n";
a.linea5 = ".\\____;_/ .\n";
a.linea6=".         .\n";
a.linea7=".         .\n";

CustomChar b {};
b.ancho=6;
b.linea1= ".      ___ .\n";
b.linea2 =".  ___/   /.\n";
b.linea3 = ". / __   / .\n";
b.linea4 = "./ /_/  /  .\n";
b.linea5 = ".\\____;_/  .\n";
b.linea6=".          .\n";
b.linea7=".          .\n";

CustomChar d {};
d.ancho=6;
d.linea1= ".      ___ .\n";
d.linea2 =".  ___/   /.\n";
d.linea3 = ". / __   / .\n";
d.linea4 = "./ /_/  /  .\n";
d.linea5 = ".\\____;_/  .\n";
d.linea6=".          .\n";
d.linea7=".          .\n";

std::cout<<b.linea1;
std::cout<<b.linea2;
std::cout<<b.linea3;
std::cout<<b.linea4;
std::cout<<b.linea5;
std::cout<<b.linea6;
std::cout<<b.linea7;


return 0; 
}
