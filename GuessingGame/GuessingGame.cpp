#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

void playGame(int minRange, int maxRange)
{
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % (maxRange - minRange + 1) + minRange; // Generate random number within range
    int guess;
    bool guessedCorrectly = false;

    cout << "\nGuess the number between " << minRange << " and " << maxRange << ":\n";

    while (!guessedCorrectly)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the right number.\n";
            guessedCorrectly = true;
        }
        else if (guess < secretNumber)
        {
            cout << "Wrong! The number is higher.\n";
        }
        else
        {
            cout << "Wrong! The number is lower.\n";
        }
    }
}

int main()
{
    int minRange, maxRange, option;

    do
    {
        cout << "Enter the minimum range: ";
        cin >> minRange;
        cout << "Enter the maximum range: ";
        cin >> maxRange;

        playGame(minRange, maxRange);

        cout << "\nWhat would you like to do next?\n";
        cout << "1. Play again\n";
        cout << "2. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

    } while (option == 1);

    cout << "Thanks for playing!\n";
    return 0;
}
