/*
Task #1: 
Write a short program where the user is asked to enter a single character. Print the value of the character and its ASCII code, using static_cast.
The program’s output should match the following:
Enter a single character: a
You entered 'a', which has ASCII code 97.
*/

#include <iostream>



void Exercise02() {
	char userAnswer{ '0' };
	std::cout << "Enter a single character:";
	std::cin >> userAnswer;
	//function here
	std::cout << "You entered '" << userAnswer << "' " << ", which has ASCII code " << static_cast <int> (userAnswer); //variagble for ascII code.
}
