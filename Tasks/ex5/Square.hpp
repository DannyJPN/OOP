#ifndef SQUARE
#define SQUARE
#include <math.h>
#include "Polygone.hpp"
class Square:public Polygone
{
public:
Square(double side);
double Perimeter();
double Area();
};
#endif

