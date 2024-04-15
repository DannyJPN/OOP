#include <iostream>
#include "Polygone.hpp"
#include "Triangle.hpp"
#include "Square.hpp"
using namespace std;

int main()
{
    cout<<"\n______________________\nTriangles:"<<endl;
    Triangle* t1 = new Triangle(4);

    cout<<"P: "<<t1->Perimeter()<<endl;

    cout<<"S: "<<t1->Area()<<endl;

cout<<"\n______________________\nSquares:"<<endl;
    Square* e1 = new Square(5);

    cout<<"P: "<<e1->Perimeter()<<endl;

    cout<<"S: "<<e1->Area()<<endl;

cout<<"\n______________________\nPolygones"<<endl;
    Polygone* p1 = new Polygone(6,2);

    cout<<"P: "<<p1->Perimeter()<<endl;

    cout<<"S: "<<p1->Area()<<endl;

cout<<"\n______________________\n"<<endl;



    return 0;
}
