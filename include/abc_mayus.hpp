#ifndef ABC_MAYUS_H
#define ABC_MAYUS_H

#include "constants.hpp"
#include <array>
#include <string>

/*
...............
:::::::::::::::
:+:+:+:+:+:+:+:
+:+:+:+:+:+:+:+
+#+#+#+#+#+#+#+
#+#+#+#+#+#+#+#
###############
*/

namespace ABC{

	static std::array <const std::string, constants::rows_per_letter> A {
		"       .      ",
	        "      :::     ",
		"     :+ +:    ",
		"    +:+ +:+   ",
		"   +#+   +#+  ",
		"  #+#+#+#+#+# ",
		" ####     ####",
	};
	
  static std::array <const std::string, constants::rows_per_letter> B {
		" .......... ",
		" ::::   ::::",
		" :+:+   :+:+",
		" +:+:+:+:+: ",
		" +#+#   +#+#",
		" #+#+   #+#+",
		" ########## ",
	};

	static std::array <const std::string, constants::rows_per_letter> C {
		"   ......... ",
	        "  ::::   ::::",
		" +:+:        ",
		" :+:+        ",
		" +#+#        ",
		"  #+#+   #+#+",
		"   ######### ",
	};

	static std::array <const std::string, constants::rows_per_letter> D {
		" .........   ",
		" ::::::::::  ",
		" :+:+   +:+: ",
		" +:+:   +:+:+",
		" +#+#   +#+# ",
		" #+#+#+#+#+  ",
		" #########   ",
	};

	static std::array <const std::string, constants::rows_per_letter> E {
		" ..........",
		" ::::::::::",
		" :+:+      ",
		" +:+:+:+:+:",
		" +#+#      ",
		" #+#+#+#+#+",
		" ##########",
	};

	static std::array <const std::string, constants::rows_per_letter> F {
		" ..........",
		" ::::::::::",
		" :+:+      ",
		" +:+:+:+:+:",
		" +#+#+#+#+#",
		" #+#+      ",
		" ####      ",
	};

	static std::array <const std::string, constants::rows_per_letter> G {
		"   .........  ",
		"  ::::   :::: ",
		" +:+:         ",
		" :+:+    +:+:+",
		" +#+#      #+#",
		"  #+#+   #+#+ ",
		"   #########  ",
	};

	static std::array <const std::string, constants::rows_per_letter> H {
		" ....   ....",
		" ::::   ::::",
		" :+:+   :+:+",
		" +:+:+:+:+:+",
		" +#+#   +#+#",
		" #+#+   #+#+",
		" ####   ####",
	};

	static std::array <const std::string, constants::rows_per_letter> I {
		" .... ",
		" :::: ",
		" :+:+ ",
		" +:+: ",
		" +#+# ",
		" #+#+ ",
		" #### ",
	};

	static std::array <const std::string, constants::rows_per_letter> J {
		"        ....",
		"        ::::",
		"        +:+:",
		"        :+:+",
		"   #+#  #+#+",
		"  #+#  +#+# ",
		"   #######  ",
	};

	static std::array <const std::string, constants::rows_per_letter> K {
		" ....   ....",
		" ::::  :::: ",
		" :+:+ :+:+  ",
		" +:+:+:+    ",
		" +#+# +#+#  ",
		" #+#+  #+#+ ",
		" ####   ####",
	};

	static std::array <const std::string, constants::rows_per_letter> L {
		" ....      ",
		" ::::      ",
		" :+:+      ",
		" +:+:      ",
		" +#+#      ",
		" #+#+#+#+#+",
		" ##########",
	};

	static std::array <const std::string, constants::rows_per_letter> M {
		" ...        ...",
		" ::::      ::::",
		" :+:+:    +:+:+",
		" +:+ :+  :+ +:+",
		" +#+  #+#+  +#+",
		" #+#   +#   #+#",
		" ###        ###",
	};

	static std::array <const std::string, constants::rows_per_letter> N {
		" ...     ...",
		" ::::    :::",
		" :+:+:   :+:",
		" +:+ :+  +:+",
		" +#+  #+ +#+",
		" #+#   +#+#+",
		" ###     ###",
	};

	static std::array <const std::string, constants::rows_per_letter> O {
		"   .........  ",
		"  ::::   :::: ",
		" +:+:     :+:+",
		" :+:+     +:+:",
		" +#+#     #+#+",
		"  #+#+   #+#+ ",
		"   #########  ",
	};

	static std::array <const std::string, constants::rows_per_letter> P {
			" .......... ",
			" ::::   ::::",
			" :+:+   :+:+",
			" +:+:+:+:+: ",
			" +#+#       ",
			" #+#+       "
			" ####       ",
		};

		static std::array <const std::string, constants::rows_per_letter> Q {
			"   .........  ",
			"  ::::   :::: ",
			" +:+:     :+:+",
			" :+:+     +:+:",
			" +#+# +#  #+#+",
			"  #+#+  #+#+# ",
			"   #########  ",
		};

		static std::array <const std::string, constants::rows_per_letter> R {
			" .......... ",
			" ::::   ::::",
			" :+:+   :+:+",
			" +:+:+:+:+: ",
			" +#+# #+#+  ",
			" #+#+  #+#+ ",
			" ####   ####",
		};

		static std::array <const std::string, constants::rows_per_letter> S {
			"   ........ ",
			" ::::    ::: ",
			" +:+:+       ",
			"  :+:+:+:+:+ ",
			"        +#+#+ ",
			"  #+#    +#+# ",
			"   ########   ",
		};

		static std::array <const std::string, constants::rows_per_letter> T {
			" ............",
			" ::::::::::::",
			"     :+:+    ",
			"     +:+:    ",
			"     +#+#    ",
			"     #+#+    ",
			"     ####    ",
		};

		static std::array <const std::string, constants::rows_per_letter> U {
			" ....    ....",
			" ::::    ::::",
			" +:+:    +:+:",
			" :+:+    :+:+",
			" +#+#    #+#+",
			"  #+#+  +#+# ",
			"   ########  ",
		};

		static std::array <const std::string, constants::rows_per_letter> V {
			"  ....    ....",
			"  ::::    ::::",
			"  +:+:    +:+:",
			"  :+:+    :+:+",
			"   #+#+  #+#+",
			"     +#+#+#",
			"      ####",
		};

	static std::array <const std::string, constants::rows_per_letter> W {
		" ...   ...   ...",
		" :::   :::   :::",
		" :+:   +:+   :+:",
		" +:+   :+:   +:+",
		" +#+   #+#   +#+",
		"   +#+#+ +#+#+",
		"    ###   ###",
	};

	static std::array <const std::string, constants::rows_per_letter> X {
		" ....     ....",
		"  ::::   :::: ",
		"   :+:+ :+:+  ",
		"    +:+:+:+   ",
		"   +#+# +#+#  ",
		"  #+#+   #+#+ ",
		" ####     ####",
	};

	static std::array <const std::string, constants::rows_per_letter> Y {
		" ....     ....",
		"  ::::   :::: ",
		"   :+:+ :+:+  ",
		"    +:+:+:+   ",
		"     #+#+#    ",
		"     +#+#+    ",
		"     #####    ",
	};

	static std::array <const std::string, constants::rows_per_letter> Z {
		"   ...........",
		"   :::::::::::",
		"         :+:+",
		"       :+:+",
		"     #+#+",
		"   +#+#+#+#+#+",
		"   ###########",
	};
}

#endif
