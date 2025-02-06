
/*

// Blake Ranabargar Coding 1 Spring 2025 Week 3
// Variables, Logic, and Randomness

#include <iostream> // In out stream sends text to and from the console
#include <string> // Allows us to use string variables

	// When using random numbers, do not forget to.
	// #include <cstdlib>	// for rand() and srand()
	// #include <ctime>		// for time()

#include <cstdlib>
#include <ctime>

using namespace std; // So we don't have to type "std;" all the time

// This is where the program starts running
// It's a function that returns a integer
int main()
{ // Start of main, all code inside a code block should be indented


	cout << "\tWelcome to Coding Week 3!\n";
	cout << "We're talking about Variables, Logic, and Randomness today!\n";

	// variables are nicknames for data
	// Creating a variable of the type integer 
	// Named "age" with the declared value of "19"

	int age = 19;
	int score;	// Declaring the variable, but not defining
	cout << "\tAlways initialized your variables.\n\n";

	srand(time(0));
	cout << "Here's your first random number! : " << rand() << ".\n";
	cout << "Here's your second random number! : " << rand() << ".\n\n";

	// Modulus gives out a remainder of long division

	cout << "7 divided by 2 = " << 7 / 2 << " With a Remainder of " << 7 % 2 << ".\n";
	cout << "A random number between 1 and 10 (inclusive) : " << (rand() % 10) + 1 << ".\n\n";

	// 1 - 10 (inclusive) could be 1 or 10
	// 1 - 10 (exclusive) could NOT be 1 or 10, but only 2 - 9
	
	cout << "Here are this week's grades for the class. (between 0 and 100) .\n";
	int counter = 0;
	// While the test is true, Keep loading
	// While (test) { Code Block }
	while (counter < 10)
	{
		counter += 1;
		cout << (rand() % 100) + 0 << "." << "\n";
	}

	cout << "\n\n";

	cout << "Hello! What is your name?\n";
	string input;		// Create a variable to hold players input
	cin >> input;		// Assign input from console to input variable

	if (input == "Blake")
	{
		cout << "What is the password?.\n";
		cin >> input;
			if (input == "Fortnite")		//Nested If statement
			{
				cout << "Welcome : " << "0nyx_Fox. "; //<< "How can I help you today?\n";
			}
			else
			{
				cout << "Imposter! Shutdown protocol engaged!\n";
				return 0;		//Quits out of program
			}
	}
	
	cout << "\n";

	cout << "Are you ready to play a game?\n";
			// A character is a single character, anything you type on your keyboard
	char playerCharInput = 'n';
			// A string is an ordered list of charcters. you could say its an array of characters
	string name = "Blake";

	int totalTurns = 0;
	do
	{
		cout << "Press 'y' to keep playing. \n";
		cin >> playerCharInput;		// Get input
		totalTurns += 1;		// Explain increment and combined assignemnt operations

		totalTurns += 1;		// Explain increment and combined operations
	} while (playerCharInput == 'y');


	// Camelcase, Always capitalize each new word after the first one

	int playerOneFuelAmount = 50;

	// An integer is a whole number, + or -, between -2bil to +2bil

	int oceanDepth = 230;

	// Floats are Floating-point numbers. They have a decimal point!
	// They're accurate to 7 digits
	// Creating a constant float named "pi" with the value of "3.1415"

	const float pie = 3.1415f;

	// Doubles are double-precision floating point numbers. Accurate to 22-digits

	double someNumbersWithDecimalPlaces = 123.456;

	//your task: Send these 4 numbers to the console.
	
	cout << "Player 1's fuel amount is : " << playerOneFuelAmount << ".\n";
	cout << "The Ocean Depth is : " << oceanDepth << ".\n";
	cout << "The number for Pie is : " << pie << ".\n";
	cout << "What are the random numbers with Decimals? : " << someNumbersWithDecimalPlaces << ".\n";


} //End of main

*/