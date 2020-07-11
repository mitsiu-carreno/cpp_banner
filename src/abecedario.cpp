#include <iostream>
#include <array>


struct CustomChar{
    int ancho;
	std::string linea1;
	std::string linea2;
	std::string linea3;
	std::string linea4;
	std::string linea5;
	std::string linea6;
	std::string linea7;
};

int main (){


CustomChar a {};
a.ancho=6;
a.linea1= ".        .\n";
a.linea2 =".  _____ .\n";
a.linea3 = ". / ___ \\.\n";
a.linea4 = "./ /__/ /.\n";
a.linea5 = ".\\____;_/.\n";
a.linea6=".        .\n";
a.linea7=".        .\n";

CustomChar a_ {};
a_.ancho=6;
a_.linea1= ".         .\n";
a_.linea2 =".  ______ .\n";
a_.linea3 = ". / ___  /.\n";
a_.linea4 = "./ /__/ / .\n";
a_.linea5 = ".\\____;_/ .\n";
a_.linea6=".         .\n";
a_.linea7=".         .\n";


std::cout<<a.linea1;
std::cout<<a.linea2;
std::cout<<a.linea3;
std::cout<<a.linea4;
std::cout<<a.linea5;
std::cout<<a.linea6;
std::cout<<a.linea7;

std::cout<<a_.linea1;
std::cout<<a_.linea2;
std::cout<<a_.linea3;
std::cout<<a_.linea4;
std::cout<<a_.linea5;
std::cout<<a_.linea6;
std::cout<<a_.linea7;


return 0; 
}
