/*
Write a program that asks the user to enter a number 0 through 9 (inclusive).
If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”.
Otherwise, print “The digit is not prime”.

Task Source: https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/

structure of this project is basically a slightly tweaked vesrion of Question #3 from the source above.
personally thought it was a great format for what Q#2 was asking.
*/


//#define ENABLE_DEBUG

#include <iostream>
#include <array>
#include <vector>
#include <format>
#include <cmath> //sqrt() function
using std::cout;
using std::cin;

namespace myprime {
	std::array<int, 4> primes = { 2, 3, 5, 7 };

	bool isPrimeSimple()
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

	int eratosthenes(int userNumber) {
		std::vector <int> a(userNumber+1, true); // Creates user defined # of vector elements, all set to true. +1 to compensate for [0] in vector. 
#ifdef ENABLE_DEBUG
		cout << a.size();
#endif
		a[0] = 0;
		a[1] = 0;
		for (int iii = 2; iii <= userNumber; ++iii) {	// starts the sieve at number 2, up to user's input. increases the value for each loop.
			if (a[iii] && (long long)iii * iii <= userNumber) { //(long long) typecasts iii. The conditional checks if iii^2 is out of bounds (relative to user input) and if a[iii] is not marked false.															
				for (int j = iii * iii; j <= userNumber; j += iii) //Place holder j uses value of iii squared as starting point, then the loop crosses out multiples of iii. 
					a[j] = false;
			}
		}
		return(a[userNumber]);//returns the element that user wants to check as false or true.
		//ref: https://t5k.org/glossary/page.php?sort=SieveOfEratosthenes
		//code ref: https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html. 
	}

	void menue() {
		int menueChoice{ 0 };
		cout << std::format(
			R"(Which Prime function to run?
				1: Simple Prime Q & A
				2: Complex Prime
			
				Enter a choice: 
				)"
		);
		cin >> menueChoice;
		switch (menueChoice) {
		case 1:
		{
			while (myprime::isPrimeSimple() != true)
			{
				std::cout << "The digit is not prime, or out of range!\n" << "\n"; // the extra \n is for visuals only
			}
			std::cout << "The digit is prime!\n" << "\n"; // the extra \n is for visuals only
			break;
		}
		case 2:
		{
			int userPrimeNum;
			cout << "Enter a integer: \n";
			cin >> userPrimeNum;
			if (userPrimeNum == 1) {
				cout << "1 is not prime";
				break;
			}
			if (eratosthenes(userPrimeNum) == 0) {
				cout << " not prime";
			}
			else {
				cout << "prime";
			}
			;
		}
		break;
		}
	}
}


void Exercise03()
{
	myprime::menue();
}
