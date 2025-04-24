
// Collaborated With Violetta
// CPP Coding Week 12 homework
// Human Classes


/*
#include <iostream>
#include <string>
using namespace std;





class human
{
protected:
	//in private code will hold name, health and damage templates
	string name;
	int health = 10;
	int damage = 4;


public:

	human()
	{
		string name;
		int health;
		int damage;

	}

	// makes constructor public
	human(string, int, int);
	void SayHello();


	//setter and getters
	//setter first for health
	void SetHealth(int givenhealth)
	{
		if (givenhealth < 0)
		{
			health = 0;
		}
		else if (givenhealth > 100)
		{
			health = 100;
		}
		else
		{
			health = givenhealth;
		}


	}

	//Getter for health
	int GetHealth()
	{
		return health;
	}

	void ChangeHealth(int by = 1)
	{
		int tempHealth = health;
		tempHealth += by;
		SetHealth(tempHealth);
	}


	//setter for damage  hopefully this works 
	//unsure if it will 
	void SetDamage(int givenDamage = 4)
	{
		health -= givenDamage;
		SetHealth(health);
	}


	// getter for damage
	int GetDamage()
	{
		return damage;
	}


	//name
	void SetName(string givenName)
	{
		if (givenName.size() < 2)
		{
			cout << "Name is too short!\n";
			return; // return nothing out of  a void funtion to end the function.
		}
		else if (givenName.size() > 20)
		{
			cout << "Name is too long!\n";
			return;
		}
		else
		{
			name = givenName;
		}
	}


	string GetName()
	{
		return name;
	}
};


	// The wizard class inherits from the human class
	// everything that the Human class has, so does the wizard
class wizard : public human
{
public: int mana;

	void castSpell()
	{
		cout << name << " Cast a spell!\n\n";
	}

	// Built a spell that poisons any human

	void poison(human& target)
	{
		cout << "The terrible wizard " << name << " has poisoned " << target.GetName() << "!\n";
		int halfOfTargetHealth = target.GetHealth() / 2;

		target.ChangeHealth(-halfOfTargetHealth);
	}

};

class necromancer : public human
{
public: int mana;

	  void raiseDead()
	  {
		  cout << name << " has risen an undead monster\n\n";
	  }


};




//constructors

human::human(string givenName, int givenHealth, int baseDamage)
{
	name = givenName;
	health = givenHealth;
	damage = baseDamage;

	// new talk
	cout << "A new Human has been made!\n";
}
void human::SayHello()
{
	cout << "Hello my name is " << name << ", and my health is " << health << ".\n";
}


//main
int main()
{

	wizard dumblydore;
	dumblydore.SetName("Abloose");
	dumblydore.SayHello();
	dumblydore.castSpell();


	necromancer cairo;
	cairo.SetName("Cairo");
	cairo.SayHello();
	cairo.raiseDead();


									//cout << "Human Class!\n\n";

	human Blake;
	Blake.SetName("Blake");
	Blake.SetHealth(50);
	
	dumblydore.poison(Blake);

	cout << "{Checking Health After Poison]\n";
	
	Blake.SayHello();




	return 0;
}

*/