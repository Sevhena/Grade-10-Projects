#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    //Variables
    int player;
    int computer;
    int playAgain;
    srand(time(0));

    do
    {
        //Introduction
        cout << "Welcome to Rock Paper Scissors!" << endl;
        cout << "*******************************" << endl;
        cout << "Please choose a move" << endl;
        cout << "ROCK = 1" << endl;
        cout << "PAPER = 2" << endl;
        cout << "SCISSORS = 3" << endl;
        cout << "*******************************" << endl;

        //Player choice
        cin >> player;
        if (player == 1)
            cout << "You chose ROCK" << endl;
        else if (player == 2)
            cout << "You chose PAPER" << endl;
        else
            cout << "You chose SCISSORS" << endl;

        //Computer Choice
        int min = 1, max = 3;
        computer = rand() % (max-min +1) + min;
        //cout << "The number is:" << computer << endl;
        {
            if (computer = 1)
                cout << "Computer chose ROCK" << endl;
            else if (computer = 2)
                cout << "Computer chose PAPER" << endl;
            else
                cout << "Computer chose SCISSORS" << endl;
        }

        //Feedback
        if (player == 2 && computer == 1)
            cout << "Congrats! You won!" << endl;
        else if (player == 3 && computer == 2)
            cout << "Congrats! You won!" << endl;
        else if (player == 1 && computer == 3)
            cout << "Congrats! You won!" << endl;
        else if (player == computer)
            cout << "It's a tie!" << endl;
        else
            cout << "You lost!" << endl;

        //Restart
        cout << "Would you like to play again (Yes = 1 / No = 0)?" << endl;
        cin >> playAgain;
    }
    while (playAgain == 1);
    return 0;
}
