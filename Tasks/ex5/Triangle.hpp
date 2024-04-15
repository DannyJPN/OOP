#ifndef TRIANGLE
#define TRIANGLE
#include <math.h>
#include "Polygone.hpp"
class Triangle:public Polygone
{
public:
Triangle(double side);
double Perimeter();
double Area();
};
#endif
