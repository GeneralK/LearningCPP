/*
Q#3
Implement a game of Hi-Lo.
First, your program should pick a random integer between 1 and 100. The user is given 7 tries to guess the number.

If the user does not guess the correct number, the program should tell them whether they guessed too high or too low.
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost, and what the correct number is. At the end of the game, the user should be asked if they want to play again.
If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.

Use the Random.h header from 8.15 -- Global random numbers (Random.h).

https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
*/



/*
program rand pick 1-100 inclusive
7 tries
wrong guess >> too high / too low
correct guess >> cout
if out of guess >> lose & tell right #
ask if user want to play again
*/

//#define ENABLE_DEBUG
#include "Random.h" //LearnCPP custom randomizer
#include "Common.h"

//highkey considering enumeration for input validation.

struct hiLoContent {
	//houses the full game
	const int MAXATTEMPT{ 7 };
	int randomInt = Random::get(1, 100);
	int currentAttempt{ 1 };

	void hiLoGuess() {
		int userGuess{ 0 };
#ifdef ENABLE_DEBUG
		cout << "\n" << randomInt << "\n";
#endif
		cout << std::format("Guess #{}: ", currentAttempt);
		cin >> userGuess;
		if (userGuess < 0) {
			cout << "we're taking your legs";
			++currentAttempt;
		}
		if (userGuess == randomInt) {
			cout << "Correct! You win!";
			currentAttempt = 8;
		}
		else if (userGuess < randomInt) {
			cout << "Your guess is too low.";
			++currentAttempt;
		}
		else if (userGuess > randomInt) {
			cout << "Your guess is too high.";
			++currentAttempt;
		}
	}
};

void hiLoExecute() {
	hiLoContent gameStart;
	cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
	while (gameStart.currentAttempt <= gameStart.MAXATTEMPT) {
		gameStart.hiLoGuess();
	}
}




void Exercise12()
{
	bool play{ true };
	do {
		char tempAnswer{ 0 };
		hiLoExecute();
		cout << "Would you like to play again (y/n)? \n";
		if (!(cin >> tempAnswer)) {
			cout << "Input Invalid. Please enter Y/N";
		}
		/*	cin >> tempAnswer; // I misunderstood this. I thought Im asking the program to add previous user input into tempAnswer. But it's actually waiting/triggering 2nd input request */
#ifdef ENABLE_DEBUG
			cout << "\n Debugging - tempAsnwer:" << tempAnswer << "\n";
#endif
		if (tempAnswer == 'n' || tempAnswer == 'N') {
			play = false;
		}
		while (tempAnswer != 'y' && tempAnswer != 'Y') {
			cout << "Input Invalid. Please enter Y/N \n";
			cin >> tempAnswer;


		}
	} while (play); //Game loops while play is true. 
	cout << "Thank you for playing.";
}
