
/*

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

	srand(time(0));

	cout << "Welcome To Week 5 Coding!\n";

	
	// if / else if / else
	// variables
	// while and do-while
	// random numbers

	cout << "What program would you like to run?\n";
	cout << "Press 1 for keep playing\n";
	cout << "Press 2 for player name\n\n";

	string input;			// Made a Variable to store the input from the player
	getline(cin, input);	// Get the input from the player

							// Test he input form the player
							// Stoi() stands for "String to Integer" and convers a string to an interger (If it can)

	if (stoi(input) == 1)
	{
		cout << "\nLets start the Keep Playing Program!\n\n";
	}
	else if (stoi(input) == 2)
	{
		cout << "\nLets start the Player Name Program!\n\n";
	}
	else
	{
		cout << "I Didn't understand that request\n\n";
	}





	// lists
		// Arrays
	string colors[4];
	colors[0] = "Red";
	colors[1] = "Blue";
	colors[2] = "Green";
	colors[3] = "Yellow";

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

					// Looping through all of these colors
	cout << "Here are all the colors in the array : \n\n";

	int iterator = 0;			// The itergator counts, starting at 0
	while (iterator < 4)		// Loop as long as we are less than the array's size
	{
		cout << colors[iterator] << "\n";		// Send the array element's value to the 
		iterator += 1;							// add 1 to the iterator

		cout << "\n";
	}


					// Building a new list using player input
	cout << "Who are your bets friends?\n";
	string bestfriends[10];			// Size of 10, arrays must specify the size in C++
	int currentElement = 0;			// This points at the next available spot in the array

	do
	{
		
		cout << "Enter a name, or type Quit to Quit\n\n";
		getline(cin, input);			// Using cin, get input and assign it to temp

		cout << "\n";

		if (input == "quit")
		{
			break;			// Makes it so that "Quit is not one of their friends
		}

		bestfriends[currentElement++] = input;		// After currentElement

	} while (input != "quit" && currentElement <= 10);				// ! is not the operator
											// "Loop while input does NOT equal to Quit"
											// and while currentElement is <= 10
	// Errors looks like this:
	// There is a main(): : Input AND a do: :input

	cout << "Here are all of your best friends. looks like a great party!\n\n";
											// for  (setup, test, action) { Code }
	for (int i = 0; i < currentElement; i++)
	{
		cout << bestfriends[i] << "\n";
	}

		// Create and Array of 33 random numbers between 1777 and 2025
		// Then, tell the user what the highest number is in that array is


	/*
			1. Create an array that ends on any 33 numbers between 1777 and 2025
			2. create a "Cout" Statement that tells the user what the highest number was in that array
			3. Get code from Adventure homework to create a random number between 2 certain amounts
			4. Create an array |	string years[33]
			5. Create a "highscore" or "mostRecentYear" |	highscore = 0 | Check to see if the mostRecentYear at the end was correct
			6. Create a random number within the range of 1777 - 2025 |		Get the range by subtracting the 2 | 2025 - 1777 = 248
			7. 
	


	int randomYear[33];
	int mostRecentYear = 0;
	int min = 1777;
	int max = 2025;
	int range = min - max;
	int randomYear = (rand() & (range + 1)) + min;


	for (int i = 0; i < 33; i++)
	{
		randomYear[i] = (rand() % (248 + 1) + 1777);
		if (randomYear[i] > mostRecentYear)
		{
			mostRecentYear = randomYear[i];
		}
	}

	for (int i = 0; i < 33; i++)
	{
		cout << randomYear[i] << "\n";
	}


	cout << "The Most recent year in the list is " << mostRecentYear << ".\n";


		// Vectors

	// Loops
		// For Loop
	
	// More Logic
		// Switch Statement
		// if / else if / else




	return 0;
}

*/