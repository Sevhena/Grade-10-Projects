#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int bolts;
    double boltsPrice = 0.05;
    int nuts;
    double nutsPrice = 0.03;
    int washers;
    double washersPrice = 0.01;
    double total;
    int confirmation;
    do
    {
        system("cls");

        cout << "Welcome to Bob's discount bolts!" << endl;
        cout << "Please place your order." << endl;
        cout << " Number of bolts: " << endl;
        cin >>  bolts;
        cout << " Number of nuts: " << endl;
        cin >>  nuts;
        cout << " Number of washers: " << endl;
        cin >>  washers;

        total = bolts * boltsPrice + nuts * nutsPrice + washers * washersPrice;

        if (bolts > nuts)
            {
            cout << "Please review your order. Is it correct (1 = yes / 0 = no)?" << endl;

            cout << "This is your order" << endl;
            cout << "Number of bolts : " << bolts << endl;
            cout << "Number of nuts : " << nuts << endl;
            cout << "Number of washers : " << washers << endl;
            cout << " The total is :" << total << endl;
            cin >> confirmation;
                /*if (confirmation == 1)
                    cout << "Awesome! Have a great day" << endl;*/
            }
            /*if (confirmation == 1)
                    cout << "Awesome! Have a great day" << endl;*/
        }
        while (confirmation == 0);

        //cout << "Order ok. Your total is :" << total << endl;
    cout << "Awesome! Have a great day!" << endl;
    return 0;
}
