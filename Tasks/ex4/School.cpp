#include "School.hpp"

School::School()
{
     School(30,12);
}
School::School(unsigned int pupil_per_class_max,unsigned int pupil_per_specclass_max)
{
    p_cl_m=pupil_per_class_max;
    p_scl_m=pupil_per_specclass_max;

}
  School::~School()
  {
      for(int i =classes.size()-1;i>=0;i--)
      {
        for(int j = classes.at(i)->pupils.size()-1;j>=0;j--)
        {
            delete classes.at(i)->pupils.at(j);
            classes.at(i)->pupils.at(j)=nullptr;

        }
        delete classes.at(i);
        classes.at(i)=nullptr;
      }
  }

    Pupil* School::FindPupil( int ID)
    {
      for(int i =classes.size()-1;i>=0;i--)
      {
          Pupil*tmp=classes.at(i)->FindPupil(ID);
        if(tmp->GetID()==ID)
        {
            return tmp;
        }
      }  return nullptr;
    }
    Pupil* School::FindPupil( string name)
    {
      for(int i =classes.size()-1;i>=0;i--)
      {
         Pupil*tmp=classes.at(i)->FindPupil(name);
        if(tmp->GetName()==name)
        {
            return tmp;
        }
      }  return nullptr;

    }



    Class* School::FindClass( int clID)
    {
        for(unsigned int i=0;i<classes.size();i++)
        {
            if(classes.at(i)->GetID()==clID)
            {
                return classes.at(i);
            }

        }
        return nullptr;
    }
    Pupil* School::AddPupil( int ID,string name,int cl)
    {

    return    classes.at(cl)->AddPupil(ID,name);

    }
    Class* School::AddClass(int number)
    {
     Class* c = new Class(number);
        classes.push_back(c);
        return c;
    }
SpecialClass* School::AddClass(int number,string foc)
    {
     SpecialClass* sc = new SpecialClass(number,foc);
        classes.push_back(sc);
        return sc;
    }



