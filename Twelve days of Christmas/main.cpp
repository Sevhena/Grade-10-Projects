#include <iostream>

using namespace std;

int main()
{
    //Variables
    int number = 12;
    int date = 1;

    //Song
    while(number > 0)
    {
        if (number == 12)
            cout << "On the " << date << "st day of christmas, my true love sent to me" << endl;
        else if (number == 11)
        {
            cout << "" << endl;
            cout << "On the " << date << "nd day of christmas, my true love sent to me" << endl;
        }
        else if (number == 10)
        {
            cout << "" << endl;
            cout << "On the " << date << "rd day of christmas, my true love sent to me" << endl;
        }
        else
        {
            cout << "" << endl;
            cout << "On the " << date << "th day of christmas, my true love sent to me" << endl;
        }

        switch(number)
        {
            case (1):
                cout << "Twelve drummers drumming," << endl;
            case (2):
                cout << "Eleven pipers piping," << endl;
            case (3):
                cout << "Ten lords a-leaping," << endl;
            case (4):
                cout << "Nine ladies dancing," << endl;
            case (5):
                cout << "Eight maids a-milking," << endl;
            case (6):
                cout << "Seven swans a-swimming," << endl;
            case (7):
                cout << "Six geese a-laying," << endl;
            case (8):
                cout << "Five golden rings," << endl;
            case (9):
                cout << "Four calling birds," << endl;
            case (10):
                cout << "Three French hens," << endl;
            case (11):
                cout << "Two turtle doves," << endl;
            case (12):
                if (number == 12)
                    cout << "a partridge in a pear tree" << endl;
                else
                    cout << "and a partridge in a pear tree" << endl;


        }
        //Variable value change
        number--;
        date++;
    }
    if (number == 0)
    {
        cout << "" << endl;
        cout << "Merry christmas!!!!!" << endl;
        cout << "" << endl;
        cout << "Sike" << endl;
    }
    return 0;
}
