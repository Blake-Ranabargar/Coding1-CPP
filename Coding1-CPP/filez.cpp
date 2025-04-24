
#include "filez.h"

void WriteToFile(string givenString)
{
	// open (or create) the file
	ofstream file("Week14_Test_File.txt", ios::app);		// ios::app to append to the end of file


	// Confirm that the file is open
	if (!file.is_open())
	{
		cout << "Could not open file.\n\n";

		return;
	}

	// Write text to the open file
	file << givenString;


	// Close the file (which saves it to Disk)
	file.close();


}

void ReadFromFile()
{
	string fileContents;		// Where we store teh text in the file

	// Open the File
	ifstream file("Week14_Test_File.txt");


	// Check that it is actually open
	if (!file.is_open())
	{
		cout << "Could not open the file.\n\n";


	}


	// cout everything in the file
	while (getline(file, fileContents))
	{
		cout << fileContents << "\n";
	}


	// Close the file
	file.close();


}
