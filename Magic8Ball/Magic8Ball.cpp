/*
Task: Create a magic 8 ball that outputs specific strings.
Project idea from codecademy.com

*/

#include <string>
#include <iostream>
#include <random>

class magicBall {
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

	void ballReply() {
		//should I randomize on top of the standard c++ randomize
		std::cout << answer[1];
	}
};

int main() {
	magicBall ball1;
	ball1.ballReply();


}