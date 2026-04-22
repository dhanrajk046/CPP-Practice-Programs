// Number Guessing Game with Attempts
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secretNumber, guess, attempts = 0;

    // Generate random number betweeen 1 and 100
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====" << endl;
    cout << " I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!\n"
         << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again.\n"
                 << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n"
                 << endl;
        }
        else
        {
            cout << "Congratulations you guessed the number." << endl;
            cout << " Correct Number: " << secretNumber << endl;
            cout << "Attempts Taken: " << attempts << endl;
        }

    } while (guess != secretNumber);
    return 0;
}