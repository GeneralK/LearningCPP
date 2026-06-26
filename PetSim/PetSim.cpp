#include <iostream>
using namespace std;

class Pet {
private:
	string petName;
	int health = 100;
	int hunger = 100;
	int hygiene = 50;


public:
	enum Stats {
		statHealth,
		statHunger,
		statHygiene,
	};

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

	void cleanPet(int activity) {
		hygiene += activity;
	}

	int displayStats(Stats stat) {
		switch (stat) {
		case statHealth: return health;
		case statHunger: return hunger;
		case statHygiene: return hygiene;
		}
		return 0;
	}

};

class Activities {
public:
	void shower(Pet& pet) {
		pet.cleanPet(25);
	}
};

int main() {
	Pet pet1;
	pet1.namePet();
	Activities activities;
	activities.shower(pet1);
	cout << pet1.displayStats(Pet::statHygiene);
	return 0;
}