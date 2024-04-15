#ifndef POLYGONE
#define POLYGONE
#include <math.h>
#include "Shape.hpp"
#define MATHPI 3.1415926535897932384626433832795
class Polygone:public Shape
{
private:
unsigned short corners;
protected:
double length;
public:
Polygone(unsigned short n,double a);
double Perimeter();
double Area();
};
#endif
