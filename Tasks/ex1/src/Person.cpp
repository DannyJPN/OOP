#include "Person.h"

Person::Person(string name,unsigned short age)
{
    this->age = age;
    this->name = name;
}

Person::~Person()
{
    //dtor
}

bool Person::Breath()
{
    return age<120;
}

string Person::Speak()
{
    return "Hello world!";
}

