/*
Write a program that asks the user to enter a number 0 through 9 (inclusive).
If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”.
Otherwise, print “The digit is not prime”.

Task Source: https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/

structure of this project is basically a slightly tweaked vesrion of Question #3 from the source above.
personally thought it was a great format for what Q#2 was asking.
*/

#include <iostream>
#include <array>

std::array<int, 4> primes = { 2, 3, 5, 7 };

bool isPrime()
{
	std::cout << "Between 0 - 9, inclusive, what numbers are prime?\n" << "Enter one integer: \n";

	double userInput{};
	std::cin >> userInput;


	for (const auto& s : primes) // const auto statement taken from https://en.cppreference.com/cpp/container/array
	{
		if (userInput == s) // make sure to use logic operator ==, not = ...
		{
			return true; // when return statement executes, function ends immediately. No other code executes after return occurs.
		}
	}

	return false;
}

void Exercise03()
{
	while (isPrime() != true)
	{
		std::cout << "The digit is not prime, or out of range!\n" << "\n"; // the extra \n is for visuals only
	}
	std::cout << "The digit is prime!\n" << "\n"; // the extra \n is for visuals only
}