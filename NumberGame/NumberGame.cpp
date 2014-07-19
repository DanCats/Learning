// NumberGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN_GUESS = 1;
const int MAX_GUESS = 100;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello player\nI'm thinking of a number between " << MIN_GUESS << " and " << MAX_GUESS << ". Can you guess it? \n";

	// Pick a random number.
	//
	srand(time(0));
	rand();
	rand();

	int Answer = rand();
	Answer = (Answer % (MAX_GUESS + 1 - MIN_GUESS)) + MIN_GUESS;
	int Tries = 0;

	while (true) 
	{
		cout << "What is your guess, young padawan?  ";
		int Guess;
		cin >> Guess;
		if (cin.fail())
		{
			cout << "The Force is not strong with this one. Please enter a number, my young padawan. \n";
			cin.clear();
			cin.ignore( INT_MAX, '\n' );
		}
		else
		{
			++Tries;

			if (Guess == Answer)
			{
				cout << "You've won. The Force is strong with you. \n";
				break;
			}
			else if (Guess > Answer)
			{
				if (Guess <= MAX_GUESS)
				{
					cout << "You're guess is too high.\n";
				}
			
				else 
				{
					cout << "I'll ask again, a number between 1 and 100.";
				}
			}
			else
			{
				cout << "Too low. Try Again.\n";

			}
			
		}

	}
	cout << "You've successfully guessed in " << Tries << " tries.\n Congratulations!\n";

	system("pause");

	return 0;
}

