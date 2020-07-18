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



int PrintLetters (char letter){
	
	std::array <std::string, constants::rows_per_letter> select_letter {};
	


	switch (letter) {
		case 'a':
			select_letter=letter_a;
			break;
		case 'e':
			select_letter=letter_e;
			break;
		case 'i':
			select_letter=letter_i;
			break;
		case 'o':
			select_letter=letter_o;
			break;
	}
	
	for (std::size_t i{0};i < select_letter.size();++i){
 	 std::cout<< select_letter[i]<<"\n";
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


