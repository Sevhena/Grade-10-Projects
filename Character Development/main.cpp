#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    string playerName;
    int strength;
    int health;
    int luck;
    //int stats = health + strength + luck;
    char reroll;

    do
    {
        system("cls");
        cout << "********************************************************************" << endl;
        cout << "                    Welcome to Sevhena-'s Quest" << endl;
        cout << "********************************************************************" << endl;

        cout << "Enter the name of your character :" << endl;
        cin >>  playerName;

        cout << "Choose your stats." << endl;

        do
        {
            cout << "Enter strength (1-10):" << endl;
            cin >>  strength;
        }while(strength > 10 || strength < 1);


        cout << "Enter health (1-10) :" << endl;
        cin >>  health;

        cout << "Enter luck (1-10) :" << endl;
        cin >>  luck;

        if (strength + health + luck > 15)
        {
            strength = 5;
            health = 5;
            luck = 5;

            cout << "You have given your character too many stat points! Default values have been applied: " << endl;
            cout << "Character name :" << playerName << endl;
            cout << "              Strength: " << strength << endl;
            cout << "              Health: " << health << endl;
            cout << "              Luck: " << luck << endl;

            cout << "To accept default values : Y" << endl;
            cout << "To reassign values : N" << endl;
            cin >> reroll;
        }
        else
        {
            cout << "Please review your character sheet before continuing." << endl;
            cout << "Character name :" << playerName << endl;
            cout << "              Strength: " << strength << endl;
            cout << "              Health: " << health << endl;
            cout << "              Luck: " << luck << endl;

            cout << "To confirm values : Y" << endl;
            cout << "To reassign values : N" << endl;
            cin >> reroll;
        }
    }
    while (reroll == 'N');
    if (reroll == 'Y')
        cout << "Awesome! Have a great game!" << endl;
    return 0;
}
