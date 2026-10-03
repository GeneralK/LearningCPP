/*
LearnCPP 8.8 introduction-to-loops-and-while-statements
Q#2
Write a program that prints out the letters a through z along with their ASCII codes.
Use a loop variable of type char.


Q#3
Invert the nested loops example so it prints the following:
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

Q#4
Make the numbers print like this:
		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1

8.10 — For statements
Q#1
Write a for-loop that prints every even number from 0 to 20.

Q#2
Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.

For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

Hint: Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value,
much like the pow() example above uses the total variable to accumulate the return value each iteration.

Q#4
The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only by three with the word “fizz”, 
any number only divisible by five with the word “buzz”, and any number divisible by both 3 and 5 with the word “fizzbuzz”.

Implement this game inside a function named fizzbuzz() that takes a parameter determining what number to count up to. 
Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

The output of fizzbuzz(15) should match the following:
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
*/


#include <iostream>
#include <format>
using std::cout;
using std::cin;

namespace loopExercise {
	void menue();
	long sumTo(int userInput); //forgot to add input parameter
	void fizzBuzz(int userInput);
};

void Exercise11() {
	loopExercise::menue();
}

namespace loopExercise {
	void menue() {
		const int EXIT_MENU{ 99 }; // Which option is for exiting menu. Modify as necessary
		int menueChoice{ 0 };
		cout << std::format(
			R"(Which function to run?
				1: Display a-z & their ASCII codes
				2: Print 5 to 1, longest row first.
				3: Print 1 first line. Right Aligned Staircase Shape
				4: Print 1 first line. Pyramid Shape
				5: Prints every even number from 0 to 20
				6: Summation : nth Triangular Number
				7: FizzBuzz
				99: Exit
			
				Enter a choice:)"
		);
		cin >> menueChoice;
		switch (menueChoice) {
		case 1:
		{
			char charCount{ 97 };
			while (charCount <= 122) {
				cout << charCount;
				cout << " " << static_cast <int> (charCount) << "\n";
				++charCount;
			}
			cout << "DONE!";
			break;
		}
		case 2:
		{
			int numb{ 5 };
			int loop{ 1 };
			const int TOTAL_LOOP{ numb };

			while (loop <= TOTAL_LOOP)

			{
				while (numb > 0)
				{
					std::cout << numb << ' ';
					--numb;
				}
				numb = TOTAL_LOOP - loop;
				std::cout << '\n';
				++loop;
			}

			break;
		}
		case 3: //Staircase Output, Right Aligned
		{
			int loop{ 1 };
			while (loop <= 5)
			{
				for (int iii = 5; iii > loop; --iii) {
					cout << "  ";
				}
				int nums{ loop };
				while (nums > 0)
				{

					std::cout << nums << " ";
					--nums;

				}
				std::cout << '\n';
				++loop;
			}
			break;
		}
		case 4: //Pyramid Output, with 1 on top...
		{
			int loop{ 1 };
			while (loop <= 5)
			{
				for (int i = 0; i < 5 - loop; i++) { // 5 is magic number i suppose. Could replace it with a constant. Same goes for the loop in while statement
					cout << " ";
				}
				/*
				for (int i = 5; i > loop; --i) {
					cout << " ";
				} this works too
				*/
				int nums{ loop };
				while (nums > 0)
				{

					std::cout << nums << ' ';
					--nums;

				}
				std::cout << '\n';
				++loop;
			}
			break;
		}
		case 5:
		{
			for (int iii = 0;iii <= 20;++iii) {
				if (!(iii % 2 == 0)) {
					;
				}
				else {
					cout << iii << " ";
				}
			}
			break;
		}
		case 6:
		{
			int tempInputTriange{ 0 };
			cout << "Type in an integer. \n";
			cin >> tempInputTriange;
			cout << "The total is: " << sumTo(tempInputTriange);
			break;
		}
		case 7:
		{
			int tempInputFB{ 0 };
			cout << "Type in an integer. \n";
			cin >> tempInputFB;
			fizzBuzz(tempInputFB);
			break;
		}
		case EXIT_MENU:
			//Exits Program
			break;
		}

	}
	long sumTo(int userInput) {
		// need a loop to use input. add everything together
		long Total{ 0 };
		for (int loop{ 0 }, inputValue{ userInput }; loop <= userInput; ++loop, --inputValue) { //apparently, I cant use int loop {}, int input value.
			Total += inputValue;
		}
		return Total;
	}
	void fizzBuzz(int userInput) {
		// feel like a switch statement will make this super fast. but going to comply with question guideline.
		for (int iii = 1;iii <= userInput;++iii) { //apparently, I cant use int loop {}, int input value.
			if (iii % 3 == 0 && iii % 5 == 0) {
				cout << "fizzbuzz \n";
			}
			else if (iii % 3 == 0) {
				cout << "fizz \n";
			}
			else if (iii % 5 == 0) {
				cout << "buzz \n";
			}
			else {
				cout << iii <<"\n";
			}
		}
	}
}

