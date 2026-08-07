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
	char operate[4]{ '+','-','*','/'};
	double userInput1{ 0 };
	double userInput2{ 0 };
	double result{ 0 };

	mathCalc doMath(float a, float b, char c) {
		for (char c : operate) {
			if (c == '+') {	//reminder single qoute = single character; double qoute = string.
				result = a + b;
				std::cout << std::format("{} {} {} is {}", a, c, b, result);
			}
			else if (c == '-') {

			}
			else if (c == '*') {

			}
			else if (c == '/') {

			}
			else {
				std::cout << "Please input a valid operator\n";
			}
		}
	}
};


void Exercise04() {

	mathCalc test1;
	test1.doMath(1, 2, '+');

	
}


// at this point, Im wondering how I can create a function that dynamically create & return different data types.
// the point is to reuse it to validate input for userInput & operate.
// apparently I need to learn about runtime & compile time, and probably templating. 

//Remark: I like how input validation is like chapter 28 on the LearnCPP website... It's ludicrously detailed site...