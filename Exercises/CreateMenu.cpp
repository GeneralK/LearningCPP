/*
Goal: Create a menue system that takes constexpr and generate a menue. Then during run time, allow adjustments.

how do you create more variables?
# of options and text for menue unknown at compile time.
How does radio variables work? 
Do I need to make the radio variable inline?
So if I type in "1" in main(), then a radio variable stores it. How does the Menu object know its talking about the same radio variable?
*/


#include <string_view>

using std::string_view;

struct menu {
	string_view str1;

	void CreateMenu() {

	};
};