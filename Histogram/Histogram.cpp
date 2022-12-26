#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    //Variables
    int number, barOne, barTwo, barThree, barFour, barFive, barSix, barSeven, barEight, barNine, barTen;
    int X = 0;
    int XX = 0;
    int XXX = 0;
    int XL = 0;
    int L = 0;
    int LX = 0;
    int LXX = 0;
    int LXXX = 0;
    int XC = 0;
    int C = 0;
    int counter = 0;
    srand(time(0));

    //Random Number Generator
    for (counter;counter < 10000; counter++)
    {
        int min = 1, max = 100;
        number = rand() % (max-min +1) + min;


        if (number <= 10)
        {
            X++;
        }
        else if (number > 10 && number < 21)
        {
            XX++;
        }
        else if (number > 20 && number < 31)
        {
            XXX++;
        }
        else if (number > 30 && number < 41)
        {
            XL++;
        }
        else if (number > 40 && number < 51)
        {
            L++;
        }
        else if (number > 50 && number < 61)
        {
            LX++;
        }
        else if (number > 60 && number < 71)
        {
            LXX++;
        }
        else if (number > 70 && number < 81)
        {
            LXXX++;
        }
        else if (number > 80 && number < 91)
        {
            XC++;
        }
        else //(number > 90 && number < 101)
        {
            C++;
        }

    }

    //Outputing graph
    cout << "Occurences (1-10): " << endl;
    barOne = X/20;
    for (barOne;barOne > 0;barOne--)
        cout << "__" << endl << "__";
    //cout << endl;

    cout << "Occurences (11-20):";
    barTwo = XX/20;
    for (barTwo;barTwo > 0;barTwo--)
        cout << "__" << endl;
    //cout << endl;

    cout << "Occurences (21-30):";
    barThree = XXX/20;
    for (barThree;barThree > 0;barThree--)
        cout << "|";
    cout << endl;

    cout << "Occurences (31-40):";
    barFour = XL/20;
    for (barFour;barFour > 0;barFour--)
        cout << "|";
    cout << endl;

    cout << "Occurences (41-50):";
    barFive = L/20;
    for (barFive;barFive > 0;barFive--)
        cout << "|";
    cout << endl;

    cout << "Occurences (51-60):";
    barSix = LX/20;
    for (barSix;barSix > 0;barSix--)
        cout << "|";
    cout << endl;

    cout << "Occurences (61-70):";
    barSeven = LXX/20;
    for (barSeven;barSeven > 0;barSeven--)
        cout << "|";
    cout << endl;

    cout << "Occurences (71-80):";
    barEight = LXXX/20;
    for (barEight;barEight > 0;barEight--)
        cout << "|";
    cout << endl;

    cout << "Occurences (81-90):";
    barNine = XC/20;
    for (barNine;barNine > 0;barNine--)
        cout << "|";
    cout << endl;

    cout << "Occurences (91-100):";
    barTen = C/20;
    for (barTen;barTen > 0;barTen--)
        cout << "|";
    cout << endl << endl;


    /*cout << "Occurences (1-10): " << X << endl;
    cout << "Occurences (11-20): " << XX << endl;
    cout << "Occurences (21-30): " << XXX << endl;
    cout << "Occurences (31-40): " << XL << endl;
    cout << "Occurences (41-50): " << L << endl;
    cout << "Occurences (51-60): " << LX << endl;
    cout << "Occurences (61-70): " << LXX << endl;
    cout << "Occurences (71-80): " << LXXX << endl;
    cout << "Occurences (81-90): " << XC << endl;
    cout << "Occurences (91-100): " << C << endl;*/


    return 0;
}
