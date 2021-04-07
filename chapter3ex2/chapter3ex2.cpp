// Chris
// COSC 1336
#include <iostream>

/* 
    Main program execution
 */
int main() {
    //Input
    int intCounter = 0;

    //Output
    // ++intCounter is the same as intCounter = 1 + intCounter before the output;
    // +1 = 1
    std::cout << "A. Counter: " << ++intCounter << std::endl;
    std::cout << "B. Counter: " << intCounter++ << std::endl; // +1 = 2
    std::cout << "C. Counter: " << intCounter << std::endl;
    std::cout << "D. Counter: " << intCounter++ << std::endl; // +1 = 3
    // +1
    std::cout << "E. Counter: " << ++intCounter << std::endl; 
    return 0;
}