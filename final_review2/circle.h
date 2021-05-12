#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
    Circle();
    Circle(double dblpRadius);
    ~Circle();
    void setRadius(double dblpRadius);
    double getRadius();
    double getDiameter();
    double getCircumference();
    void print();

private:
    double dblRadius;
};

#endif