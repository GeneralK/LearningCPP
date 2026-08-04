/*
Write the following program: 
The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Source: LearnCPP - 4.x Chapter Summary
*/

#include <iostream>


void Exercise04() {
	double userInput1{ 0 };
	double userInput2{ 0 }; 
	char operate{ 0 }; 

	std::cout << "Enter a double value: \n";
	std::cin >> userInput1;
	std::cout << "Enter a 2nd double value: \n";
	std::cin >> userInput2;
	std::cout << "Enter +, -, *, or /: \n";
	std::cin >> operate;
}


// at this point, Im wondering how I can create a function that dynamically create & return different data types.
// the point is to reuse it to validate input for userInput & operate.
// apparently I need to learn about runtime & compile time, and probably templating. 

//Remark: I like how input validation is like chapter 28 on the LearnCPP website... It's ludicrously detailed site...