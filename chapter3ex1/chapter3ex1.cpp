// COSC 1336
#include <iostream>
#include <string>

int main() {
    // Input
    int intNumber = 2;
    int intAddNumber = 8;
    char charBasic = 'B';
    int intSum = 0;
    int intCLanguage = 0;
    std::string strName = "Your Name"; 

    // Beginning Programming Outline for Success
    std::cout << "Output First" << std::endl;
    std::cout << "Input Second" << std::endl;
    std::cout << "Processing Finally" << std::endl;

    // Enter Values in Variables
    std::cout << "Please enter your name: ";
    std::cin >> strName;
    std::cout << "Please enter an integer number between (1-10): ";
    std::cin >> intNumber;
    std::cout << "Please enter another integer number between (10-20): ";
    std::cin >> intAddNumber;

    // Processing
    intSum = intNumber + intAddNumber;    

    // Output First
    std::cout << "Hello, " << strName << std::endl;
    std::cout << "C: " << intCLanguage++ << ", C++: " << intCLanguage << std::endl;
    std::cout << "Basic Number: " << intNumber << std::endl;
    std::cout << "Basic Character: " << charBasic << std::endl;
    std::cout << "Basic Math: " << intNumber << " + " << intAddNumber << " = " << intSum << std::endl;
}
