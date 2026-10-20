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

#include "Random.h" //CPP custom randomizer
#include "Common.h"

/*
program rand pick 1-100 inclusive
7 tries
wrong guess >> too high / too low
correct guess >> cout
if out of guess >> lose & tell right #
ask if user want to play again
*/


void hiLoExecute() {
	hiLoContent gameStart;
}
struct hiLoContent {
	//houses the full game
	const int MAXATTEMPT{ 7 };
	int randomInt = Random::get(1, 100);
	int currentAttempt{ 1 };
	
}


void Exercise12()
{
	bool play{ true };
	while (play) { //plays the game while true


	}


}
