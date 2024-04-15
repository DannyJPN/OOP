#include "Pupil.hpp"
#include <iostream>
using namespace std;



Pupil::Pupil(int id,string n)
{
    ID=id;
    name=n;
}
int Pupil::GetID()
{
    return ID;
}

string Pupil::GetName()
{
    return name;
}
