

#ifndef SPCLASS
#define SPCLASS
#include "Class.hpp"
using namespace std;

class SpecialClass:public Class
{
    private:
    string spec;


    public:
        SpecialClass(int ID,string sp);
       string GetSpecialization(void);


};










#endif // CLASS
