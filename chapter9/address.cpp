#include <string>
#include <iostream>
#include "address.h"

Address::Address() {
    init();
}

Address::~Address() {
    setFirst(" ");
    setLast("");
    setPhoneNumber("");
}

void Address::print() {
    std::cout << toString();
}

std::string Address::toString() {
    std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
}
void Address::init() {
    //Works
    //strFirst = "";
    //Best Method
    setFirst("");
    setLast("");
    setPhoneNumber("(000) 000 0000");
}
void Address::setFirst(std::string strpFirst) {
    // With setters what you need to protect the class variables goes logically here
    if(strpFirst.size() < 1) { 
        strpFirst = "Default"; 
    }
    strFirst = strpFirst;
}
void Address::setLast(std::string strpLast) {
    strLast = strpLast;
}
void Address::setPhoneNumber(std::string strpPhoneNumber) {
    strPhoneNumber = strpPhoneNumber;
}
std::string Address::getFirst() {
    return strFirst;
}
std::string Address::getLast() {
    return strLast;
}
std::string Address::getPhoneNumber() {
    return strPhoneNumber;
}

void Address::input() {
    std::string strTempValue = "";
    std::cout << "Enter a first name: ";
    std::cin >> strTempValue;
    setFirst(strTempValue);
    std::cout << "Enter a last name: ";
    std::cin >> strTempValue;
    setLast(strTempValue);
    std::cout << "Enter a Phone Number: ";
    std::cin >> strTempValue;
    setPhoneNumber(strTempValue);
}