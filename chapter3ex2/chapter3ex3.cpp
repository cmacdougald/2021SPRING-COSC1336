#include <iostream>
#include <string>

int main() {
    // Deck of Cards 52
    // Suites = 4
    // Face = A, 2-10, J, Q, K = 13
    int intCard = 37;
    std::string strFace = "None";
    std::string strSuite = "None";

    std::cout << "Please enter a card index (1-52): ";
    std::cin >> intCard;

    if(intCard > 52) {
        intCard = 52;
        std::cerr << "Warning: intCard is greater than 52. Default is 52." << std::endl;
    } else if (intCard < 1) {
        intCard = 1;
        std::cerr << "Warning: intCard is less than 1. Default is 1." << std::endl;
    }
//          A                         J  Q  K
//Row 1:    1  2  3  4  5  6 7 8 9 10 11 12 13 - Clubs
//Row 2:    14 15 16 17 18 ...              26 - Diamonds
//Row 3:    27                              39 - Hearts
//Row 4:    40                              52 - Spades
    
//    int intNumberOfPeople = 25;
//    int intChairsAtTable = 4;
//    int intTables = (intNumberOfPeople / intChairsAtTable);

    int intFace = ((intCard - 1) % 13) + 1;
    int intSuite = ((intCard - 1) / 13) + 1;
/*
    double dblNumber = 1.6;
    std::cout << "Number: " << dblNumber 
            << " D: " << (dblNumber / 13) 
            //<< " R:" << (dblNumber % 13) 
            << std::endl;
    */

    if(intSuite == 1) {
        strSuite = "Club";
    }

    if(intSuite == 2) {
        strSuite = "Diamonds";
    }

    if(intSuite == 3) {
        strSuite = "Hearts";
    }

    if(4 == intSuite) {
        strSuite = "Spades";
    }

    if(1 == intFace) {
        strFace = "Ace";
    } else if(11 == intFace) {
        strFace = "Jack";
    } else if(12 == intFace) {
        strFace = "Queen";
    } else if(13 == intFace) {
        strFace = "King";
    } else {
        strFace = std::to_string(intFace);
    }

    std::cout << "Face Value: " << intFace << std::endl;
    std::cout << "Suite Value: " << intSuite << std::endl;
    std::cout << "Card: " << strFace << " of " << strSuite << std::endl;
}