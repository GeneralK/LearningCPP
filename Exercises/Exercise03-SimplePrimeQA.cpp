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
		std::vector <int> a (userNumber);
		cout << a.size();
		a[1] = 0;
		for (int iii = 2; iii >= userNumber; ++iii) {
			a[iii] = 1;
		}
		int p = 2;
		while ((p * p) <= userNumber) {
			int j = p * p;
			while (j <= userNumber) {
				a[j] = 0;
				j = j + p;
			}
			for (p; a[p] == 1; ++p) {
				;
			}
		}
		return(a[userNumber]);
		//ref: https://t5k.org/glossary/page.php?sort=SieveOfEratosthenes
	}

	void menue() {
		int menueChoice{ 0 };
		cout << std::format(
			R"(Which Prime function to run?
				1: Simple Prime Q & A
				2: Complex Prime
			
				Enter a choice:)"
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
			cout << "Enter a integer.";
			cin >> userPrimeNum;
			eratosthenes(userPrimeNum);
		}
		break;
		}
	}
}


void Exercise03()
{
	myprime::menue();
}
