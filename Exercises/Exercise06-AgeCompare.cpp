/*
LeanCPP 5.x — Chapter 5 Summary & Quiz, Question #4
Write a program that asks for the name and age of two people, then prints which person is older.
Here is the sample output from one run of the program:
Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <format>

struct person {
	int age{ 0 };
	std::string name{ 0 };

	void inputInfo() {
		std::cout << "Gimme name";
		std::cin >> this->name;
		std::cout << "Gimme age";
		std::cin >> this->age;
	}
};

void comparePersonAge(person a, person b) {
	if (a.age > b.age) {
		std::cout << std::format ("{} (age {}) is older than {} ( age {})", a.name,a.age,b.name,b.age);
	}
};

void Exercise06() {
	person person1;
	person person2;
	person1.inputInfo();
	person2.inputInfo();
	comparePersonAge(person1, person2);

}