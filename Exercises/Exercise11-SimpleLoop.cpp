/*
Q#2
Write a program that prints out the letters a through z along with their ASCII codes.
Use a loop variable of type char.
LearnCPP 8.8 introduction-to-loops-and-while-statements
*/

/*
Loop to display character/letter. Then also display ascii.
97 - 122 are a-z
*/

#include <iostream>
using std::cout;

void Exercise11() {
	char charCount{ 97 };
	while (charCount <= 122) {
		cout << charCount;
		cout << " " << static_cast <int> (charCount) << "\n";
		++charCount;
	}
	cout << "DONE!";
}



