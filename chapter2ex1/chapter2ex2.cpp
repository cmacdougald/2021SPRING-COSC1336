#include <iostream>

int main() {
    int intNumber = 2;
    char chrChoice = 'a';

    std::cout << "Enter a number between 1 and 20: ";
    std::cin >> intNumber;

    std::cout << "Enter a lowercase letter: ";
    std::cin >> chrChoice;

    if(intNumber == 1) {
        std::cout << "Crit Fail" << std::endl;
    }

    if(intNumber % 2 == 1) {
        std::cout << "Odd Number" << std::endl;
    } else {
        std::cout << "Even Number" << std::endl;
    }

    if(chrChoice == 'a') {
        std::cout << "You entered 'a' for advanced settings." << std::endl;
    }

    if(chrChoice == 'a' && intNumber % 2 == 0) {
        std::cout << "You entered 'a' and got even more advanced settings." << std::endl;
    }

    return 0;
}