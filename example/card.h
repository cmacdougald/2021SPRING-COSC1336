#ifndef CARD_H
#define CARD_H
#include <string>

class Card
{
public:
    Card();
    Card(int intpCardValue);
    ~Card();
    int getCardValue();
    void setCardValue(int intpCardValue);
    int getFaceValue();
    int getSuiteValue();
    std::string getFaceString();
    std::string getSuiteString();
    std::string toString();

private:
    int intCardValue = 0;
};

#endif
