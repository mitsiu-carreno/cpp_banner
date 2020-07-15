#include "constants.hpp"
#include "CustomChar.hpp"
#include <iostream>
#include <array>
#include<string>

/*
                                    __  __                                            
   ____ ___  __  __   ____  __  __/ /_/ /_  ____  ____                               
  / __ `__ \/ / / /  / __ \/ / / / __/ __ \/ __ \/ __ \
 / / / / / / /_/ /  / /_/ / /_/ / /_/ / / / /_/ / / / /                              
/_/ /_/ /_/\__, /  / .___/\__, /\__/_/ /_/\____/_/ /_/                               
          /____/  /_/    /____/                         
   ____ __________ _____  / /_  _____ 
  / __ `/ ___/ __ `/ __ \/ __ \/ ___/ 
 / /_/ / /  / /_/ / /_/ / / / (__  )     
 \__, /_/   \__,_/ .___/_/ /_/____/  
/____/          /_/                                                                  
 
 +    
+  _------_
+ /   /_\  \
+/  ________\
+\  \_____,-,
+ \________/
+

+    
+   ,-------,
+  /   /_/  /
+ /  ______/
+/  /____,-,
+/________/
+
 */



int PrintLetters (){
	
	std::array<std::string, constants::rows_per_letter> CustomCharTwo {
		/*std::string first_line,
		std::string second_line,
		std::string third_line,
		std::string fourth_line,
		std::string fifth_line,
		std::string sixth_line,
		std::string seventh_line,
		*/
	};

	std::array <std::string, constants::rows_per_letter> letra_a {
		"             ",
		"    ,-------,",
		"   /  ___   /",
		"  /  /  /  /",
		" /   `-´  /",
		" \\____;__;",
		"           ",	

	};

	for (std::size_t i{0};i < letra_a.size();++i){
 	 std::cout<< letra_a[i]<<"\n";
	}
	
	return 0; 
	}

/*

+                 
+    ,-------,
+   /  ___   /
+  /  /  /  /
+ /   `-´  /
+ \____;__;
+           

+    
+    ,------,
+   /  /_/  /
+  /  _____/
+ /  /__,-,
+/_______/
+


+     __ 
+    /_/
+    __
+   / /
+  / /
+ / /
+/_/
+


+      
+    ______
+   / ___  \
+  / /  / /
+ / /  / /
+/ /__/ /
+\_____/
+  


+      
+   
+     _     _
+    / /  / /
+   / /  / /
+  / /_ / /
+ /______/
+ 
*/


