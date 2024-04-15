#ifndef SCHOOL
#define SCHOOL
#include "Pupil.hpp"
#include "Class.hpp"
#include "SpecialClass.hpp"
#include <vector>
class School
{

private:
    unsigned int cl_m=9*(3+1),p_cl_m,p_scl_m;


public:
vector<Class*> classes;
    School();
    School(unsigned int pupil_per_class_max,unsigned int pupils_per_specclass_max);
    ~School();

    Pupil* FindPupil( int ID);
    Pupil* FindPupil( string name);
    Class* FindClass( int clID);
    Pupil* AddPupil( int ID,string name,int classnum);
    Class* AddClass(int number );
    SpecialClass* AddClass(int number,string focus);



};











#endif // School
