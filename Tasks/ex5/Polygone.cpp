#include "Polygone.hpp"
Polygone::Polygone(unsigned short n,double a)
{
corners =n;
length=a;
}
double Polygone::Perimeter()
{
return corners*length;
}
double Polygone::Area()
{

return 2*corners*(length/2)*((length/2)/(tan((2*MATHPI)/(2*corners))))/2;
}
