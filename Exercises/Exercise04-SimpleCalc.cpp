/*
Write the following program: 
The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Source: LearnCPP - 4.x Chapter Summary
*/

#include <iostream>
#include <format> // this library for std::format

struct mathCalc {
	double userInput1{ 0 };	//reminder that parameters will initalize in the same format as member order
	double userInput2{ 0 };	// ie. if char operate was at the top, parameter a in doMath() will be seen as char...
	char operate{ 0 };
	double result{ 0 };

	void askInput(){
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
				result = a+b;
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


// at this point, Im wondering how I can create a function that dynamically create & return different data types.
// the point is to reuse it to validate input for userInput & operate.
// apparently I need to learn about runtime & compile time, and probably templating. 

//Remark: I like how input validation is like chapter 28 on the LearnCPP website... It's ludicrously detailed site...