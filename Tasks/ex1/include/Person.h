#include <string>
#ifndef PERSON_H
#define PERSON_H

using namespace std;

class Person
{
    public:
        unsigned short age;

        Person(string name,unsigned short age);
        ~Person();

    protected:

    private:
        string name;
        bool Breath();
        string Speak();
};

#endif // PERSON_H
