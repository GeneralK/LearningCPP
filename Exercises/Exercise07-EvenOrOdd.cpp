/*
Question #2 | Lesson 6.3 Remainder & Exponentiation
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. 
Use the remainder operator to test whether the integer parameter is even. 
Make sure isEven() works with both positive and negative numbers.
*/

#include <iostream>
#include <format>
#include <string>

constexpr int numberInput{ 0 };

constexpr bool isEven(int numberInput) {
	if (numberInput % 2 == 0) {
		return true;
	}
	else if (numberInput % 2 != 0) {
		return false;
	}
}

void userInput() {
	std::cout << "Enter an integer: ";
	std::cin >> constexpr numberInput;
	if (isEven(numberInput)) {
		std::cout << numberInput << "is even";
	} else if (!isEven(numberInput)) {
		std::cout << numberInput << "is odd";
	};
}

void Exercise07() {



}