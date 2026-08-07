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
Distance fallen = 1/2 * ( Gravity * seconds^2 )

Source: LearnCPP - 4.x Chapter Summary
*/

#include <iostream>
#include <format> // this library for std::format

struct fallCalc {
	double towerHeight{ 0 };


	void askBallDrop() {
		std::cout << "Enter the height of the tower in meters: ";
		std::cin >> towerHeight;
	}

	void updateBallProperty() {
		// need a loop, index matters. we want 5 second intervals
	}
};


void Exercise05() {
	const double gravity{ 9.8 };


}