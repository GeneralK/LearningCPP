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
*/


#include <iostream>
#include <format>
using std::cout;
using std::cin;

namespace loopExercise {
	void menue();
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
		case EXIT_MENU:
			//Exits Program
			break;
		}

	}
}

