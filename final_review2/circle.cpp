#include <iostream>
#include <cmath>
#include "circle.h"
//const double PI = 3.141592653589793238463;

Circle::Circle()
{
    setRadius(1);
}

Circle::Circle(double dblpRadius)
{
    setRadius(dblpRadius);
}

Circle::~Circle()
{
    setRadius(0.1);
}

void Circle::setRadius(double dblpRadius)
{
    if (dblpRadius < 0.0)
    {
        dblpRadius = 1.0;
        std::cerr << "Invalud radius set to default of 1." << std::endl;
    }
    dblRadius = dblpRadius;
}
double Circle::getRadius()
{
    return dblRadius;
}
double Circle::getDiameter()
{
    return 2.0 * getRadius();
}
double Circle::getCircumference()
{
    return 2.0 * getRadius() * M_PI;
}
void Circle::print()
{
    std::cout << "This circle object has a radius of: " << getRadius()
              << " a diameter of: " << getDiameter()
              << " and a circumference of: " << getCircumference() << std::endl;
}