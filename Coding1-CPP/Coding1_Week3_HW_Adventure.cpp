/*

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


// This is my Github! : https://github.com/Blake-Ranabargar


int main()
{	
	srand(time(0));				// Creates a random world seed
	string input;

	//set up the game

	int playerHealth = (rand() % 10) + 4;
	int attack;
	int block;
	int turns = 0;	
	bool gameLoop = false;
	

	// Welcome the player and ask them to play
	cout << "\tHello Player! Ready for an Adventure?\n";
	cout << "\t\tyes or no?\n\n";

	cin >> input;

	if (input == "yes")
	{

		cout << "\n" << "\tAwesome! Lets Begin...\n";			// Begins Adventure
		cout << "\tYour world generation will be " << (rand()) << "\n"; // Shows random world seed
		cout << "\tYou will begin your adventure with : " << playerHealth << " Health!\n\n";
		gameLoop = true;
	}
	if (input == "no")
	{
		cout << "\t\tOkay, Have a nice day!\n";
		return 0;												// Quits out of program
	}

	while (gameLoop = true)										// Begins Gameloop
	{
		turns += 1;
		attack = (rand() % 4);
		block = (rand() % 4);

		if (attack > block)		// Takes health away if block fails
		{
			playerHealth -= attack;
			cout <<  "\tYou've taken " << attack << " points of damage!\n";
			cout << "\tYou have : " << playerHealth << " Health remaining\n";

			if (playerHealth <= 3 and playerHealth >= 1)		// Checks if player is alive but in critical condition
			{
				cout << "\tYou should go to the nearest doctor! You can find one here : " << "https://www.wesleymc.com\n";
			}


			if (playerHealth < 1)	// Checks if player is alive
			{
				cout << "\tYou have been slain!\n\n";
				gameLoop = false;
				cout << "\t\tWould you like to play again?\n";
				cout << "\t\tyes or no?\n\n";
				cin >> input;
				if (input == "yes")
				{
					cout << "\n" << "\tAwesome! Lets Begin...\n";			// Restarts Adventure
					cout << "\tYour world generation this time will be " << (rand()) << "\n"; // Shows random world seed
					gameLoop = true;
					playerHealth = 10;
					turns = 0;
				}

			}


			cout << "\tWould you like to end the adventure?\n";
			cout << "\t\tyes or no?\n\n";
			cin >> input;


		}

		if (block >= attack)					// Tells player if they succesfully blocked the attack
		{
			cout << "\tYou have successfully blocked the attack!\n";
			cout << "\tWould you like to end the adventure?\n";
			cout << "\t\tyes or no?\n\n";
			cin >> input;

			if (input == "yes")
			{
				cout << "\t\tOkay, Have a nice day!\n";
				gameLoop = false;
				return (0);
			}
		}
		
		if (turns == (rand() % 10) + 4)
		{
			cout << "\tYou have completed your adventure!\n";
			gameLoop = false;
			cout << "\t\tWould you like to play again?\n";
			cout << "\t\tyes or no?\n\n";
			cin >> input;
			if (input == "yes")
			{
				cout << "\n" << "\tAwesome! Lets Begin...\n";			// Restarts Adventure
				cout << "\tYour world generation this time will be " << (rand()) << "\n"; // Shows random world seed
				gameLoop = true;
				playerHealth = 10;
				turns = 0;
			}
		}


	}


}  */