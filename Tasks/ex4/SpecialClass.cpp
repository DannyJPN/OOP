#include "SpecialClass.hpp"


string SpecialClass::GetSpecialization()
{
    return spec;
}

SpecialClass::SpecialClass(int ID,string sp):Class(ID)
        {
            spec=sp;
        }
