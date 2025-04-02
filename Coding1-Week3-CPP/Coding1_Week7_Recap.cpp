

// Coding1 Recap Week

/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;
bool debug = false;		// debug mode is by default OFF, it activates if the player is us




int main()
{

	srand(time(0));
	bool debug = false;

	cout << "Hello! Welcome to Week 7 of Coding! (Recap Week)\n\n";

	cout << "What is your name?\n\n";

	string input;		// Create a variable to hold players input
	//cin >> input;		// Assign input from console to input variable

	getline(cin, input);

	if (input == "Blake1")
	{
		cout << "\n\n";
		cout << "Welcome : " << "Creator. \n\n"; //<< "How can I help you today?\n";

		debug = true;
		if (debug) cout << "Debug mode is ON!\n\n";
	}
	else
	{
		cout << "\n\n";
		cout << "Hello : " << input << ".\n\n";
	}


	

	if (false)
	{
		int theNumber = rand() % 10 + 1;		// Random number between 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
		int guess = 0;
		if (debug) cout << "The number is " << theNumber << ".\n";

		while (guess != theNumber)
		{
			cout << "What is your guess?\n\n";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber)
			{
				cout << "\n\n";
				cout << "You have guessed the correct number!\n\n";
				break;
			}
			if (guess > theNumber)
			{
				cout << "Your guess is too high!\n\n";
			}
			else
			{
				cout << "Your guess is too low!\n\n";
			}
		}
	}

	if (true)
	{
		vector<string> favBooks = { "Harry Potter and The Goblet of Fire", "The Familiars", "Lord of The Rings" };
		favBooks.push_back("Harry Potter and The Goblet of Fire");
		favBooks.push_back("The Familiars");
		favBooks.push_back("Lord of The Rings");

		cout << "The first book in my list of favBooks is " << favBooks[0] << " .\n\n";
		cout << "Please add another book to the list.\n\n";

		getline(cin, input);	

		favBooks.push_back(input);	//Adds another element to the end of the vector

		cout << "There are now " << favBooks.size() << " Books in the list.\n\n";
		cout << "The last book in the list is : " << favBooks[favBooks.size() - 1] << ".\n";

		cout << "Here is the unsorted list : \n\n";
		sort(favBooks.begin(), favBooks.end());

		cout << "Here is the sorted list : \n\n";
		for (int i = 0; i < favBooks.size(); i++)
		{
			cout << favBooks[i] << "\n\n";
		}

		cout << "Randomly Shuffling the list : \n\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "Here is the Shuffeled list : \n\n";
		for (int i = 0; i < favBooks.size(); i++)
		{
			cout << favBooks[i] << "\n\n";
		}

		cout << "Give me a book from the list, and I'll tell you what position it is in the list.\n\n";
		getline(cin, input);
		vector<string>::iterator iter;
		iter = find(favBooks.begin(), favBooks.end(), input);

		if (iter != favBooks.end())
		{
			cout << *iter << ".\n";
		}
		else
		{
			cout << "That books is not in the list.\n";
		}

	}
	

} */