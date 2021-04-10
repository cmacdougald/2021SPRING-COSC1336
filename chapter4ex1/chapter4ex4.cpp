#include <iostream>
#include <vector>

int main() {
    std::vector<int> vtrNumbers(0);
    int intNumber = 0;
    int intSum = 0;

    do {
        do {
            std::cout << "Please enter numbers 1 to 100, 0 to stop: ";
            std::cin >> intNumber;
        } while(intNumber > 100 || intNumber < 0);
        if (intNumber != 0) {
            vtrNumbers.push_back(intNumber);
            std::cerr << "DEBUG " << vtrNumbers.size() << std::endl;
        }
    } while (intNumber != 0);


    for(int intIndex = 0; intIndex < vtrNumbers.size(); intIndex++){
        std::cout << vtrNumbers.at(intIndex) << ", ";
    }
    std::cout << std::endl;

    for(int intIndex = 0; intIndex < vtrNumbers.size(); intIndex++){
        intSum += vtrNumbers.at(intIndex);
    }

    std::cout << "Sum: " << intSum << std::endl;
    
}