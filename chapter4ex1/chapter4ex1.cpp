#include <iostream>

int main() {
    char charChoice = 'X';
    bool boolDontQuit = true;

    while (boolDontQuit) {
        std::cout << "Main Menu" << std::endl;
        std::cout << "=========" << std::endl;
        std::cout << "P)lay" << std::endl;
        std::cout << "S)ettings" << std::endl;
        std::cout << "Q)uit" << std::endl;

        std::cout << "Please enter your menu choice (P,S,Q): ";
        std::cin >> charChoice;

        switch (charChoice)
        {
            case 'P': case 'p':
                std::cout << "This is menu option for play." << std::endl;
                break;
            case 'S': case 's':
                std::cout << "This is menu option for settings." << std::endl;
                break;
            case 'Q': case 'q': case 'x': case 'e':
                boolDontQuit = false;
                std::cout << "This is menu option for quit." << std::endl;
                std::cout << "Thank you for playing." << std::endl;
                break;
            default:
                std::cout << "Invalid Menu Choice - Please pick from the menu!" << std::endl;
                break;
        } //Switch
    } //While

    return 0;
}