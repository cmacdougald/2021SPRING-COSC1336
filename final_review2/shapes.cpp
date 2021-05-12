#include <iostream>
#include "circle.h"

int main() {
    
    Circle objCircleOne = Circle();
    Circle objCircleTwo = Circle(2.5);

    objCircleOne.print();
    objCircleTwo.print();

    return 0;
}