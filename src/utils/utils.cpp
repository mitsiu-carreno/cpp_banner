#include<iostream>

bool InputCheck () {
	if(std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		return false;
	
	}else{
		std::cin.ignore(32767,'\n');
		return true;
	
	}

}
