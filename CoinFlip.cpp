#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

string flipCoin() {
    int result = rand() % 2;

    return result == 0 ? "Heads" : "Tails";
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int choice;

    while (true) {
        cout << endl;
        cout << "Coin Flipping App" << endl;
        cout << "1. Flip the coin" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << endl;
                cout << "Result: " << flipCoin() << endl;
                break;
            case 2:
                cout << "Exiting the app. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    }

    return 0;
}
