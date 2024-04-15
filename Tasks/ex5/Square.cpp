#include "Square.hpp"
Square::Square(double side):Polygone(4,side)
{

}

double Square::Perimeter()
{
return 4*length;
}
double Square::Area()
{

return length*length ;
}

