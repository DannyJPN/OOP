#ifndef PERSON
#define PERSON

#include <iostream>

using namespace std;
class Person
{
private:
    unsigned int ID;
public:
    string name;

    Person(string n,unsigned int id);
};


#endif // PERSON
