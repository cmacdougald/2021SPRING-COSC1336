#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> vtrWords {"10 Dollar Bills", "5 Dollar Bills", "1 Dollar Bills", "Quarters", "Dimes", "Nickels", "Pennies"};
    std::vector<int> vtrCurrencyAmounts {1000, 500, 100, 25, 10, 5, 1};
    std::vector<int> vtrChangeAmounts;  

    double dblMoney = 7.92; //792

    std::cout << "Please enter how much money you have in your pocket: ";
    std::cin >> dblMoney;

    dblMoney = dblMoney * 100;

    //std::cerr << intDollars << std::endl;
    //std::cerr << intCents << std::endl;

    for(int intIndex = 0; intIndex < vtrCurrencyAmounts.size(); intIndex++) {
        vtrChangeAmounts.push_back(dblMoney / vtrCurrencyAmounts.at(intIndex));
        dblMoney = dblMoney - (vtrChangeAmounts.at(intIndex) * vtrCurrencyAmounts.at(intIndex));
    }

    for(int intIndex = 0; intIndex < vtrWords.size(); intIndex++) {
         std::cout << vtrWords.at(intIndex) << ": " << vtrChangeAmounts.at(intIndex) << std::endl;
    }

    return 0;
}