/*
Write a function called calculate() that takes two integers and a char representing 
one of the following mathematical operations: +, -, *, /, or % (remainder). 
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error message. 
For the division operator, do an integer division, and don’t worry about divide by zero.

Hint: “operator” is a keyword, variables can’t be named “operator”.

8.6 — Switch fallthrough and scoping
*/

#include <iostream>
#include <format> // this library for std::format

struct mathCalc {
	double userInput1{ 0 };	//Reminder that struct member function's parameters, IF IT CREATES A NEW OBJECT, will initalize according to struct member order
	double userInput2{ 0 };	// ie. if char operate was at the top, parameter a in doMath() will be seen as char...
	char operate{ 0 };
	double result{ 0 };

	void askInput() {
		std::cout << "Enter a double value: \n";
		std::cin >> userInput1;
		std::cout << "Enter another double value: \n";
		std::cin >> userInput2;
		std::cout << "Enter +, -, *, or /: \n";
		std::cin >> operate;
	};

	void doMath(double a, double b, char c) {
		userInput1 = a;
		userInput2 = b;
		operate = c;
		if (c == '+') {	//reminder single qoute = single character; double qoute = string.
			result = a + b;
		}
		else if (c == '-') {
			result = a - b;
		}
		else if (c == '*') {
			result = a * b;
		}
		else if (c == '/') {
			result = a / b;
		}
		else {
			std::cout << "Please input a valid operator\n";
		}
	}
};


void Exercise04() {
	mathCalc test1;
	test1.askInput();
	test1.doMath(test1.userInput1, test1.userInput2, test1.operate);
	std::cout << std::format("{} {} {} is {}", test1.userInput1, test1.operate, test1.userInput2, test1.result);


}