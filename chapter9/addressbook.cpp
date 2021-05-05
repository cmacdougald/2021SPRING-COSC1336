#include <iostream>
#include <vector>
#include <string>
#include "address.h"

int main() {
    std::vector<Address> vtrAddress(2);
    Address objAddress = Address();
    Address objAddress2 = Address();

    vtrAddress.clear();

    objAddress.setFirst("Chris");
    objAddress.setLast("M");
    objAddress.setPhoneNumber("(210) 555 5555");

    vtrAddress.push_back(objAddress);

    objAddress2.setFirst("Daniel");
    objAddress2.setLast("M");
    objAddress2.setPhoneNumber("(210) 333 3333");

    vtrAddress.push_back(objAddress2);

    objAddress = Address();

    objAddress.input();

    vtrAddress.push_back(objAddress);

    for(int intIndex = 0; intIndex < vtrAddress.size(); intIndex++) {
        vtrAddress.at(intIndex).print();
        std::cout << std::endl;
    }
    

    return 0;
}