/*
Write the following program:
Simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).
Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula:
d(x) = 1/2 * ( g * x^2 )
Distance fallen = 1/2 * ( gravity * seconds^2 )

Source: LearnCPP - 4.x Chapter Summary
*/

#include <iostream>

#include <format> // This library for std::format. The general syntax for floating-point precision in std::format is :.Nf, 
//#include <iomanip> // This is for setting decimal places for output via setprecision(), but only for std::ostringstream
//#include <cmath> // There's a pow() function inside cmath.

struct fallCalc {
	const double gravity{ 9.8 };
	double towerHeight{ 0 };
	double distanceFallen{ 0 };



	void askBallDrop() {
		std::cout << "Enter the height of the tower in meters: ";
		std::cin >> this->towerHeight;
	}

	void distanceFallenCalc(float seconds) {
		this->distanceFallen = (0.5) * (this->gravity * seconds * seconds); //forgot to use decimal numbers for 1/2...
	}

	void updateBallProperty() {
		double i = 0;
		while ( i != 5) {
			distanceFallenCalc(i);
			std::cout << std::format("At {} seconds, the ball is at height: {:.1f} Meters\n", i, (this->towerHeight - this->distanceFallen));;
			++i;
		}
		std::cout << std::format("At {} seconds, the ball is on the ground", i);

		/*
		for (int i = 0; i < 5; ++i) {  //assembly code genereated by i++ is usually longer than ++i according to my friend. 
		
		distanceFallenCalc(i);
		std::cout << i << "\n";
		towerHeight -= distanceFallen;  //i dont even know why I did this.. its shrinking the range everytime this occurs.
		std::cout << towerHeight << "\n";
		}
		*/
	
	}
};


void Exercise05() {
	fallCalc Ball;
	Ball.askBallDrop();
	Ball.updateBallProperty();


}