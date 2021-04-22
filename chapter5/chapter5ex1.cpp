#include <iostream>

bool isPrime(int intpNumber) {
    //Variable for Prime
    bool boolIsPrime = true;
    if(intpNumber == 0 || intpNumber == 1) {
        boolIsPrime = false;
        //Calculation for Prime
    } else {
        for(int intCounter = 2; intCounter <= intpNumber / 2; intCounter++) {
            //std::cerr << "C:" << intCounter << ", N:" << intpNumber << std::endl;
            if(intpNumber % intCounter == 0) {
                boolIsPrime = false;
                break; //intCounter = intpNumber;
            }
        } //for loop for prime
    }
    return boolIsPrime;
}

int main() {

    for(int intNumber = 1; intNumber <= 10000; intNumber++) {
        // Reset Prime before testing for prime
     
        std::cout << intNumber << " is a " << (isPrime(intNumber) ? "": "not ") << "prime number." << std::endl;
        
        //if(boolIsPrime) {
        //    std::cout << intNumber << ", ";
        //}
    } //for loop for numbers
    return 0;
}