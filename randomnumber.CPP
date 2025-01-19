#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int userGuess;

    cout << "Guess a number between 1 and 100: \n";

    while (true) 
    {
        cin >> userGuess;

        if (userGuess < numberToGuess) 
        {
            cout << "Too low! Try again: \n";
        } else if (userGuess > numberToGuess) 
        {
            cout << "Too high! Try again: \n";
        } else 
        {
            cout << "Correct! The number was " << numberToGuess << ".\n";
            break;
        }
    }

    return 0;
}