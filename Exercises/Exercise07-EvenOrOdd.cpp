/*
Question #2 | Lesson 6.3 Remainder & Exponentiation
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. 
Use the remainder operator to test whether the integer parameter is even. 
Make sure isEven() works with both positive and negative numbers.
*/

/*
The solution given by LearnCPP for this lesson is not the best... It's just visually demonstrating C++'s compile time
evaluation rather than giving a meaningful example... The variable holding user input is only obtainable during runtime.
And the example doesnt include a " constexpr int myNumber {12} " to use for isEven()...
In other words, this exercise would just be a regular run-time function with constant expression sprinkled in for visuals...
*/

/*
The lesson from 6.7 Relational operators and floating point comparisons | Comparing floating point numbers (advanced / optional reading)
There are better example of compile time evaluation there.
*/

#include <iostream>
#include <string>

int numberInput { 0 };

constexpr bool isEven(int numberInput) {
	if (numberInput % 2 == 0) {
		return true;
	}
	else if (numberInput % 2 != 0) {
		return false;
	}
}


void Exercise07() {
	std::cout << "Enter an integer: ";
	std::cin >> numberInput;
	if (isEven(numberInput)) {
		std::cout << numberInput << " is even";
	}
	else if (!isEven(numberInput)) {
		std::cout << numberInput << " is odd / or you've entered a letter";
	};
}