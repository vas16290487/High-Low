#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	int diceRoll; //Holder for result of dice roll
	int compNum; //Holder for the initial randomly generated number
	string userInp; //Holder for user input. This could be y or n

	//Generate initial random number
	srand(time(NULL));
	compNum = rand() % 10 + 1;

	cout << "compNum: " << compNum << endl;

	//Roll a 10-sided dice (die?)
	diceRoll = rand() % 10 + 1;
	cout << "diceRoll: " << diceRoll << endl;

	cout << "Welcome to High-Low! The rules are simple: I will tell you a number between 1 and 10, "
            "then I will roll a 10-sided dice for you. Then, you have to guess if the dice rolled a number "
            "higher than my initial number. Easy, right? Let's get started!" << endl;
	cout << "Here's my number: " << compNum << endl;
	cout << "1, 2 and 3, do you think that you have rolled a number higher than me? Type y for yes and n for no. ";
	cin >> userInp;

    if (diceRoll == compNum) {cout << "Draw!";}
    else if (((diceRoll > compNum) and (userInp == "y"))
          or ((diceRoll < compNum) and (userInp == "n")))
             {cout << "You win!";}
    else if (((diceRoll < compNum) and (userInp == "y"))
          or ((diceRoll > compNum) and (userInp == "n")))
             {cout << "You lose!";}
	return 0;
}
