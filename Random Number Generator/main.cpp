#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int guess;
    int randomNumber;
    cout << "The number is: " << endl;
    cin >> guess;
    srand(time(0));
    int min = 11, max = 20;
    randomNumber = rand() % (max-min +1) + min;
    cout << "The number is:" << randomNumber << endl;
    if (guess == randomNumber)
        cout << "You are correct!" << endl;
    else
        cout << "That is incorrect." << endl;
    return 0;
}
