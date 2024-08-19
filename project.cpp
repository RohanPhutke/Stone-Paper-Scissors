#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Game options
    string options[] = {"Stone", "Paper", "Scissors"};

    // Player choice
    int playerChoice;

    while (true) {
        cout << "Choose one of the following options:\n";
        cout << "1. Stone\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> playerChoice;

        // Check for valid input
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice. Please choose again.\n";
            continue;
        }

        // Computer's choice
        int computerChoice = rand() % 3 + 1; // Generates a number between 1 and 3

        // Display choices
        cout << "You chose: " << options[playerChoice - 1] << endl;
        cout << "Computer chose: " << options[computerChoice - 1] << endl;

        // Determine the winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }

        // Ask if the player wants to play again
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }
    }

    cout << "Thank you for playing!\n";
    return 0;
}
