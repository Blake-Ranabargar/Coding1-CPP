#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

bool listActivate = false;

int main()
{

    cout << "Hello, welcome to your top 10 Videogames list!\n";
    cout << "Would you like to create your list?\n";
    cout << "type yes to continue, or no to stop the program.\n\n";

    int currentFavGames = 0;
    string favGames[10];
    string input;
    getline(cin, input);
    

    if (input == "yes")
    {
        listActivate = true;
    }
    if (input == "no")
    {
        cout << "\n";
        cout << "Understood, Closing Program.\n";
        return 0;
    }

    cout << "\n";
    
    if (listActivate = true)
    {
        do
        {
            cout << "What would you like to do?\n\n";

            cout << "You may add    : Allowing you to add a new entry out of the 10 spaces.\n";
            cout << "You may rename : Allowing you to change the name of a previous entry.\n";
            cout << "You may remove : Allowing you to set a previous entry to be empty and edit later\n";
            cout << "You may show   : Allowing you to see the name of all previous entries.\n";
            cout << "You may quit   : Allowing you to close the program.\n\n";

            getline(cin, input);

            cout << "\n";

            if (input == "add")
            {
                if (currentFavGames >= 10)
                {
                    cout << "Your list is full! Please remove a game before adding a new one.\n\n";
                }
                else
                {
                    cout << "Enter a name : \n";
                    cout << "\n";

                    getline(cin, input);			// Using cin, get input and assign it to temp

                    (currentFavGames <= 10);

                    cout << "\n";

                    cout << "Name Regsitered.\n\n";
                }
            }

            else if (input == "rename")
            {

                cout << "Which game would you like to rename?\n\n";
                
                for (int i = 0; i < currentFavGames; i++)
                {

                    getline(cin, input);

                    if (input == favGames[i])
                    {
                        favGames[i] = " ";
                    }

                    cout << "What would you like to rename it to?\n\n";

                    getline(cin, input);

                }

                cout << "name change accepeted.\n\n";

            }

            else if (input == "remove")
            {
                // what do you want to remove?
                // // get input
                // looking through the loop

                cout << "Which game would you like to remove?\n\n";

                getline(cin, input);

                cout << "\n\n";

                for (int i = 0; i < currentFavGames; i++) 
                {
                    if (input == favGames[i]) 
                    {
                        cout << "I've found the game, removing it now.\n";
                        favGames[i] = "";
                    }
                }

                cout << "\n";
            }

            else if (input == "show") 
            
            {

                cout << "Here are your list of games :  \n\n";
               
                for (int i = 0; i < currentFavGames; i++) 
                {
                    // this is how we skip removed or not-yet-added lines in our array
                    if (favGames[i] == "") 
                    {
                        continue;
                    }
                    else 
                    {
                        cout << favGames[i] << ".\n";
                    }

                    cout << "\n";
                }
            }
            
            else if (input == "quit")
            {
                cout << "Understood, Closing Program.\n";
                return 0;
            }

            else
            {
                cout << "im sorry, What you have enetered is invalid, Please try these instead :  \n\n";
            }

            favGames[currentFavGames++] = input;

        } while (currentFavGames <= 10);
    } 
}