#include <iostream>
#include <string>
#include "card.h"

Card::Card() {
    setCardValue(1);
}

Card::Card(int intpCardValue) {
    setCardValue(intpCardValue);
}

Card::~Card() {
    setCardValue(1);
}

int Card::getCardValue() {
    return intCardValue;
}

void Card::setCardValue(int intpCardValue)
{
    if (intpCardValue > 52)
    {
        std::cerr << "Warning W001: Card is greater than 52. Default is 52." << std::endl;
        intpCardValue = 52;
    }
    if (intpCardValue < 0)
    {
        std::cerr << "Warning W002: intCard is less than 1. Default is 1." << std::endl;
        intpCardValue = 1;
    }
    intCardValue = intpCardValue;
}

int Card::getFaceValue()
{
    return ((getCardValue() - 1) % 13) + 1;
}

int Card::getSuiteValue()
{
    return ((getCardValue() - 1) / 13) + 1;
}

std::string Card::getSuiteString()
{
    switch (getSuiteValue())
    {
    case 1:
        return "Club";
        break;
    case 2:
        return "Diamonds";
        break;
    case 3:
        return "Hearts";
        break;
    case 4:
        return "Spades";
        break;
    }
    return "Error: Invalid Card Suite";
}

std::string Card::getFaceString()
{
    switch (getFaceValue())
    {
    case 1:
        return "Ace";
        break;
    case 11:
        return "Jack";
        break;
    case 12:
        return "Queen";
        break;
    case 13:
        return "King";
        break;
    default:
        return std::to_string(getFaceValue());
        break;
    }
    return "Error: Invalid Card Face";
}

std::string Card::toString()
{
    return getFaceString() + " of " + getSuiteString();
}
