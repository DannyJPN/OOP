
#ifndef CLASS
#define CLASS
#include <iostream>
#include "Pupil.hpp"
#include <vector>
using namespace std;

class Class
{
    private:
    int id;


static int counter;
    public:
       vector<Pupil*> pupils;
       Class(int ID);
       ~Class();
        int GetID();
        Pupil* FindPupil( int ID);
    Pupil* FindPupil( string name);
    Pupil* AddPupil( int ID,string name);




};










#endif // CLASS
