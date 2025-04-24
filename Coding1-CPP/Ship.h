
#pragma once
#include <string>
using namespace std;

// Specifies the type of ship
enum shipType{FIGHTER, FRIGATE, FREIGHTER, CRUISER};

class ship
{
public:
	string name;
	int fuel;
	shipType type;

	ship();			//The constructor
	void status();	//

};

