
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


void ReadFromFile()
{
	string fileContents;		// Where we store teh text in the file

	// Open the File
	ifstream file("Week14_Test_File.txt");


	// Check that it is actually open
	if (!file.is_open())
	{
		cout << "Could not open the file.\n\n";
		return;

	}


	// cout everything in the file
	while (getline(file, fileContents))
	{
		cout << fileContents << "\n";
	}


	// Close the file
	file.close();

}

	void WriteShipToFile(ship givenShip)
	{
		cout << "Writing " << givenShip.name << " to file.\n";
		//open or create the file
		ofstream file("ship.txt", ios::app);

		//confrim the file is open
		if (!file.is_open())
		{
			cout << "Could not open File.\n";
			return;
		}

		//write text to the open file
		
		file << givenShip.name << "\n";							// Can be treated as a Cout line
		file << givenShip.fuel << " fuel level.\n";


		switch (givenShip.type)
		{
		case FIGHTER: file << "Fighter.\n";
			break;
		case FRIGATE: file << "Frigate.\n";
			break;
		case FREIGHTER: file << "Freighter.\n";
			break;
		case CRUISER: file << "Cruiser.\n";
			break;
		default: file << "Unkown.\n";
			break;
		}

		//close the file (which saves it to disk)
		file.close();
	}

