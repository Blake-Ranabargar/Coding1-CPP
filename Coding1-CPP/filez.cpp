
#include "filez.h"
#include "ship.h"

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


ship WriteShipToFile(string givenShipName, int givenFuel, shipType shipType)
{
	//set name, fuel and ship type


	//opens file
	ofstream file("Week14_Test_File.txt", ios::app);

	//confrim the file is open
	if (!file.is_open()) //it doesnt like this code
		//"C2561" "WriteShipToFIle" function must return a value?
	{
		cout << "Could not open File.\n";
		return;
	}


	//write text to the open file
	void status();


	//close the file (which saves it to disk)
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
