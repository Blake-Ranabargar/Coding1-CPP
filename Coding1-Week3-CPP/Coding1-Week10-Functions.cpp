/*

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// Global variables are/can be dangerous
// Global varibales exist in all functions in this source file

bool debug = false;

// Functions
	// f(x) = y
	// f(input) = output
	// f(2) = 4
	// f(4) = 6
	// All functions have a return type, a name, and an (input reference)
	// Declaring and defining a new fuction named "sayHello"
	// It has a return type of void, which means it returns nothing
	// It has one input parameter named "Greeting" with a default value of "Hello!"


void sayHello(string greeting = "Hello!")
{
	cout << greeting << "\n";
}

// Declare the function here
// And Define it AFTER main

void sayGoodbye(string farewell = "Goodbye!")
{
	cout << farewell << "\n";
}

double triple(double givenNumber)
{
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n\n";

	return givenNumber * 3;
}

int triple(int givenNumber)
{
	if (debug) cout << "[givenNumber " << givenNumber << ".]\n";

	return givenNumber * 3;			// This is the output of the function
}

float triple(float givenNumber)
{
	if (debug) cout << "[givenNumber " << givenNumber << ".]\n";

	return givenNumber * 3;			// This is the output of the function
}




// Creating a new function named "getPlayerName"
// Return type is string, with two input perameters for minSize and maxSize
string getPlayerName(int minSize = 5, int maxSize = 15)
{
	string input;

	do
	{
		cout << "What is your name ? \n\n";
		getline(cin, input);

		// Data validation
		if (input.size() < minSize)
		{
			cout << "Your name needs to be atleast " << minSize << " characters.\n\n";
		}
		else if (input.size() > maxSize)
		{
			cout << "Your name needs to be fewer than " << maxSize << " characters.\n\n6";
		}
		else
		{
			string greeting = "Hello " + input + "!";			// Create a greeting that includes
			sayHello(greeting);									// The players name
			return input;										// output = player's name
		}
	} 
	while (true);
}


int randomNumberInRange(int min = 0, int max = 10)
{		// Check to make sure that the max is larger than the min
	if (min >= max)
	{
		cout << "I can't use those numbers.";
		return -1;
	}
	// Calculate range
	int range = (max - min) + 1;
	// return random number
	return rand() % range + min;

}



int main()
{
	string input;			// To keep track of whta the user will input for later
	srand(time(0));



	sayHello("Hey! Welcome to Week 10!");
	//sayHello("Welcome to the ThunderDome!!!");
	//sayGoodbye("See you next time!");
	//sayGoodbye("Here's looking at ya, kid.");

	string playername = getPlayerName();

	cout << "Triple of 4 is: " <<  triple(4) << ".\n";
	cout << "Triple of 12 is: " << triple(12) << ".\n";
	cout << "Triple of 62 is: " << triple(62) << ".\n\n";

	cout << "Triple of 4 is: " << triple(5.15) << ".\n\n";

	cout << "Triple of 4 is: " << triple(10.1234) << ".\n\n";
	

	//cout << "Hello!\n\n";
	cout << "Please enter the names of your top three favorite foods! : \n\n";

	string favFoods[11];

	for (int i = 0; i < 3; i++)
	{
		cout << "Fav Food #" << i + 1 << ": ";				// Prompt the player with the text
		getline(cin, input);								// Get input from player

		favFoods[i] = input;								// Add the input to the array
	}

	cout << "Here are your favorite foods: \n\n";
	for (int i = 0; i < 3; i++)								// Run the loop three times
	{
		cout << favFoods[i] << ".\n\n";						// Output each food
	}


	cout << "min = what? : ";
	getline(cin, input);
	int min = stoi(input);

	cout << "max = what? : ";
	getline(cin, input);
	int max = stoi(input);

	cout << "\n\n";
	cout << "A random number between " << min << " and " << max;
	cout << " is " << randomNumberInRange(min, max) << ".\n\n";









} */