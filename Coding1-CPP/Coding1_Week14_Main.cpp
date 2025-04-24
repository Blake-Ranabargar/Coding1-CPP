

// Week 14 reading from and writing to files


#include "filez.h"
#include "ship.h"

using namespace std;

int main()
{
	cout << "What is your list of your favorite games?\n\n";

	ReadFromFile();

	WriteToFile("Did you get the Switch2 Preorder?\n\n");

	ship minnow;
	minnow.type = CRUISER;
	minnow.status();

	return 0;
}

/*

	1. files we will use today
	2. Coding_week14_main
	3. filez.h
	4. filez.cpp
	5. ship.h
	6. ship.cpp


	The header file just has to have #includes and the function delarations
	the source file (.cpp) Will have the function definitions
*/