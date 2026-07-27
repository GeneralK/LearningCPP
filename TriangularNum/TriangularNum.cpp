/*
Task: Write a C++ program to calculate the first 100 triangular numbers (0, 1, 3, 6, 10, 15, 21, …)
Project idea from MIT OpenCourseWare | 6.S096 | January IAP 2013 | Undergraduate
*/

#include <iostream>

int triangularNum(int n); // Let n = the base of triangle / user input


int main() {
	int base { 0 }; // base of triangle
	std::cout << "What's the number of base?\n";
	std::cin >> base;
	std::cout << "Your answer is: " << triangularNum(base);
	return 0;
}

int triangularNum(int n) {
	if (n >= 0)
	{
		return n*(n+1)/2;
	}
	else {
		std::cout << "Please enter a non-negative value.";
	}
}