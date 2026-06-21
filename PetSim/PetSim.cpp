#include <iostream>
using namespace std;

class Pet {
private:
	string petName;
	int health = 100;
	int hunger = 100;

public:
	int updateHealth() {
		health += 1;
	}
	Pet() {
		//need to think of something i guess for construfctor
	}

	void namePet() {
		cout << "Choose name of pet: ";
		cin >> petName;
		cout << "Perfect, your pet is now named: "
			<< petName
			<< "!\nHave a good day\n";
	}
};

int main() {
	Pet pet1;
	pet1.namePet();
	return 0;
}