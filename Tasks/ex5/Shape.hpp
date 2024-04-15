
#ifndef SHAPE
#define SHAPE
class Shape
{
public:
Shape();
virtual double Perimeter()=0;
virtual double Area()=0;
virtual ~Shape();
};
#endif
