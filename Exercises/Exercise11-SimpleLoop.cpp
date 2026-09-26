/*
Q#2
Write a program that prints out the letters a through z along with their ASCII codes.
Use a loop variable of type char.
LearnCPP 8.8 introduction-to-loops-and-while-statements
*/


#include <iostream>
#include <format>
using std::cout;
using std::cin;

void Exercise11() {
	loopExercise::menue();
}

namespace loopExercise {
	void menue() {
		const int EXIT_MENU{ 5 }; // Which option is for exiting menu. Modify as necessary
		int menueChoice{ 0 };
	cout << std::format(
		R"(Which function to run?
				1: Display a-z & their ASCII codes
				2: Delete Student
				3: Find by Name
				4: Find by Roll
				5: Exit
			
				Enter a choice:)"
	);
	cin >> menueChoice;
	switch (menueChoice) {
	case 1:
		char charCount{ 97 };
		while (charCount <= 122) {
			cout << charCount;
			cout << " " << static_cast <int> (charCount) << "\n";
			++charCount;
		}
		cout << "DONE!";
		break;
	case 2:
		//
		break;
	case 3:
		//
		break;
	case 4:
		//
		break;
	case EXIT_MENU:
		//Exits Program
		break;
	}

}
}

