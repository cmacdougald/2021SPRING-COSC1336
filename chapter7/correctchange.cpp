#include <iostream>

int main()
{

    int intFiveBills = 0;
    int intOneBills = 0;
    int intQuarters = 0;
    int intDimes = 0;
    int intNickels = 0;
    int intPennies = 0;
    double dblMoney = 9.00;

    std::cout << "Please enter how much money you have in your pocket: ";
    std::cin >> dblMoney;

    int intDollars = dblMoney / 1;
    int intCents = (dblMoney - intDollars) * 100;

    //std::cerr << intDollars << std::endl;
    //std::cerr << intCents << std::endl;

    intFiveBills = intDollars / 5;
    intDollars = intDollars - (intFiveBills * 5);

    intOneBills = intDollars / 1;
    intDollars = intDollars - intOneBills;

    intQuarters = intCents / 25;
    intCents = intCents - (intQuarters * 25);

    intDimes = intCents / 10;
    intCents = intCents - (intDimes * 10);

    intNickels = intCents / 5;
    intCents = intCents - (intNickels * 5);

    intPennies = intCents / 1;
    intCents = intCents - (intPennies * 1);

    std::cout << "5 Dollar Bills: " << intFiveBills << std::endl;
    std::cout << "1 Dollar Bills: " << intOneBills << std::endl;
    std::cout << "Quarters: " << intQuarters << std::endl;
    std::cout << "Dimes: " << intDimes << std::endl;
    std::cout << "Nickels: " << intNickels << std::endl;
    std::cout << "Pennies: " << intPennies << std::endl;

    return 0;
}