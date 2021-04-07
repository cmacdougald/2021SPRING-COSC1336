#include <iostream>

int main() {
    char charChoice = 'r';
    char charComputerChoice = 's';
    int intWins = 0;
    int intNumberOfGames = 0;
    bool boolDontQuit = true;

    while(boolDontQuit) {
        // Menu for user input       
        std::cout << "Rock, Paper, Scissors" << std::endl;
        std::cout << "Please enter (r, p, s, or x to quit): ";
        std::cin >> charChoice;
        charChoice = tolower(charChoice);

        // Computer choice logic
        switch (rand() % 3)
        {
            case 0:
                charComputerChoice = 'r';
                break;
            case 1:
                charComputerChoice = 'p';
                break;
            default:
                charComputerChoice = 's';
                break;
        }

        std::cerr << "DEBUG" << ": Computer Choice: " << charComputerChoice << std::endl;

        // User choice logic
        switch (charChoice) {
            case 'r': case 'p': case 's':
                intNumberOfGames++;
                // Game logic
                if(charChoice == charComputerChoice) {
                    std::cout << "You tied." << std::endl;
                } else if (charChoice == 'r' && charComputerChoice == 's' ||
                            charChoice == 'p' && charComputerChoice == 'r' ||
                            charChoice == 's' && charComputerChoice == 'p') {
                    std::cout << "You won." << std::endl;
                    intWins++;
                } else {
                    std::cout << "You lost." << std::endl;
                } //if
                break;
            case 'x': // Game quit condition
                boolDontQuit = false;
                break;
            default: // Invalid user input
                std::cerr << "You entered an invalid choice." << std::endl;
                break;
        } //Switch
    } //While
    std::cout << "Thanks for playing!" << std::endl;
    std::cout << "You won " << intWins << " times out of " << intNumberOfGames << " games played." << std::endl;

    return 0;
}