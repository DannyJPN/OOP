#include "Triangle.hpp"
Triangle::Triangle(double side):Polygone(3,side)
{

}

double Triangle::Perimeter()
{
return 3*length;
}
double Triangle::Area()
{

return length*length*sqrt(3)/4;
}
