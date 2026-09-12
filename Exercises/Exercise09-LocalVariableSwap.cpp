/*
Write a program that asks the user to enter two integers, one named smaller, the other named larger.
If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values.
Then print the values of the smaller and larger variables. Add comments to your code indicating where each variable dies.
Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

The program output should match the following:
Enter an integer: 4
Enter a larger integer: 2
Swapping the values
The smaller value is 2
The larger value is 4

Learn CPP 7.3
*/

#include <string>
#include <iostream>
//#include <optional> // library for handling function outcomes in C++17
//Syntax: std::optional<int> structure::foo() { return std::nullopt; }

struct simpleCompare {
	int int1{ 0 };
	int int2{ 0 };
	void valueSwap();
};


void Exercise09() {
	bool retry{ 1 };
	while (retry) {
		char choice = '0';
		simpleCompare mysimpleCompare;
		std::cout << "Enter an integer: \n";
		std::cin >> mysimpleCompare.int1;
		std::cout << "Enter a larger integer: \n";
		std::cin >> mysimpleCompare.int2;
		mysimpleCompare.valueSwap();
		std::cout << "Try again? [Y/N] \n";
		std::cin >> choice;
		if (!(choice == 'y' || choice == 'Y')) { retry = 0;}
	}
}



void simpleCompare::valueSwap() {
	switch (int1 == int2) {
	case 1:
		std::cout << "They are the same, please try again.\n";
		break;
	
	case 0:
		std::cout << "Swapping the values \n";
		int smallInt{ 0 };
		int bigInt{ 0 };
		if (int1 > int2) {
			smallInt = int2;
			bigInt = int1;
		} else {
			smallInt = int1;
			bigInt = int2;
		}
		std::cout << "The smaller value is " << smallInt << "\n";
		std::cout << "The larger value is " << bigInt << "\n";
		break;
	}
	// return int1 > int2 ? int1 : int2; //ternary operatory my beloved. I cannot use you everywhere. 
}
