/************************************************
** Author: Andrea Hayes
** Date:
** Purpose:
** Input:
** Processing:
** Output:
*************************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {

    unsigned seed = time(0);

    srand(seed);  // Seeds number generator

    const int MIN_VALUE = 1; // Minimum value for number
    const int MAX_VALUE = 3; // Maximum value for number
    int number, guess;

    number = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Formula for random number

    cout << "Choice? (1=Rock, 2=Paper, 3=Scissors): ";
    cin >> guess;

    if (guess < 0 || guess > 3)
    {
        cout << "Invaild choice. Please choose again." << endl;
        return 1; 
    }
    if (guess == 1 && number == 1)
    {
        cout << "Computer chose ROCK..." << endl;
        cout << "You chose ROCK. It's a tie!";
    }
    else if (guess == 1 && number == 2)
    {
        cout << "Computer chose PAPER..." << endl;
        cout << "You chose ROCK. You Lose!";
    }
    else if (guess ==1 && number ==3)
    {
        cout << "Computer chose SCISSORS... " << endl;
        cout << "You chose ROCK. You Win!";
    }
    if  (guess == 2 && number == 2)
    {
        cout << "Computer chose PAPER..." << endl;
        cout << "You chose PAPER It's a tie!";
    }
    else if (guess == 2 && number == 1)
    {
        cout << "Computer chose ROCK..." << endl;
        cout << "You chose PAPER. You Win!";
    }
    else if (guess == 2 && number == 3)
    {
        cout << "Computer chose SCISSORS..." << endl;
        cout << "You chose PAPER. You Lose!";
    }
    if (guess == 3 && number == 3)
    {
        cout << "Computer chose SCISSORS..." << endl;
        cout << "You chose SCISSORS. It's a tie!";
    }
    else if (guess == 3 && number == 1)
    {
        cout << "Computer chose ROCK..." << endl;
        cout << "You chose SCISSORS. You Lose!";
    }
    else if (guess == 3 && number == 2)
    {
        cout << "Computer chose PAPER..." << endl;
        cout << "You chose SCISSORS. You Win";
    }

    return 0;
}


    