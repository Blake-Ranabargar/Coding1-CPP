#include "Ship.h"
#include <iostream>

// Define the constructor

ship::ship()
{
	name = "SS Minnow";
	fuel = 50;
	type = FRIGATE;

}

void ship::status()
{
	cout << "The good ship\n\n" << name << " has" << fuel << " .\n";
	cout << "The ship's type is \n";

	switch (type)
	{
	case FIGHTER: cout << "Fighter.\n";
		break;
	case FRIGATE: cout << "Frigate.\n";
		break;
	case FREIGHTER: cout << "Freighter.\n";
		break;
	case CRUISER: cout << "Cruiser.\n";
		break;
	default: cout << "Unknown.\n";
		break;
		
	}

}
