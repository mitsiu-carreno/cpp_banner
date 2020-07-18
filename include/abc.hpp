#ifndef ABC_H
#define ABC_H
#include "constants.hpp"
#include <array>
#include <string>


namespace abc{


	std::array <const std::string, constants::rows_per_letter> letter_a {
		"             ",
		"    ,-------,",
		"   /  ___   /",
		"  /  /  /  /",
		" /   `-´ /",
		" \\____;__;",
		"           ",
	};
	
	std::array <const std::string, constants::rows_per_letter> letter_e {
		"            ",
	   	"    ,------,",
	   	"   /  /_/  /",
           	"  /  _____/",
           	" /  /__,-,",
           	"/_______/",
	   	"         "
	};

	std::array <const std::string, constants::rows_per_letter> letter_i {	
      	       "     __", 
     	       "    /_/", 
               "   / /",
               "  / /",
               " / /",
               "/_/",
               "  ",
	};

	std::array <const std::string, constants::rows_per_letter> letter_o {
                "    ______",
                "   / ___  \\",
                "  / /  / /",
                " / /  / /",
                "/ /__/ /",
                "\\_____/",
                "      ",
	};


}

#endif

