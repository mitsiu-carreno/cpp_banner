#ifndef ABC_H
#define ABC_H
#include "constants.hpp"
#include <array>
#include <string>


namespace abc{


	static std::array <const std::string, constants::rows_per_letter> letter_a {
		"             ",
		"    ,-------,",
		"   /  ___   /",
		"  /  /  /  /",
		" /   `-´ /",
		" \\____;__;",
		"           ",
	};
	
	static std::array <const std::string, constants::rows_per_letter> letter_e {
		"            ",
	   	"    ,------,",
	   	"   /  /_/  /",
           	"  /  _____/",
           	" /  /__,-,",
           	"/_______/",
	   	"         "
	};

	static std::array <const std::string, constants::rows_per_letter> letter_i {	
      	       "     __", 
     	       "    /_/", 
               "   / /",
               "  / /",
               " / /",
               "/_/",
               "  ",
	};

	static std::array <const std::string, constants::rows_per_letter> letter_o {
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

