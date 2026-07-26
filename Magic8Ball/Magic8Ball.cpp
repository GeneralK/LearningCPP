/*
Task: Create a magic 8 ball that outputs specific strings.
Project idea from codecademy.com

*/

#include <string>
#include <iostream>
#include <random>

class magicBall {
	
private:
	std::random_device rd;
	std::mt19937 generator{ rd() };
	std::uniform_int_distribution<int> dist{ 1, 20 }; // dist is a distribution object, not a number.
	int randomIndex = dist(generator); // I cannot do this: std::cout << answer[{dist}];
	
	std::string answer[20]{
		"It is certain.",
		"It is decidedly so.",
		"Without a doubt.",
		"Yes - definitely.",
		"You may rely on it.",
		"As I see it, yes.",
		"Most likely.",
		"Outlook good.",
		"Yes",
		"Signs point to yes.",
		"Reply hazy, try again.",
		"Ask again later",
		"Better not tell you now.",
		"Cannot predict now.",
		"Concentrate and ask again.",
		"Don't count on it.",
		"My reply is no.",
		"My sources say no.",
		"Outlook not so good.",
		"Very doubtful.",
	};

public:
	void ballReply() {
		std::cout << answer[randomIndex];
	}
};

int main() {
	std::string userInput; // Not sure if this is necessary?
	magicBall ball1;
	std::cout << "What is your question today?\n";
	std::cin >> userInput;
	ball1.ballReply();
}