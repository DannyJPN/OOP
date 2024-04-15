#include "Class.hpp"
int Class::counter =0;
      Class::Class(int ID)
      {
          id=ID;
          counter++;
      }
Class::~Class()
{
    counter--;
}
    int Class::GetID()
        {
            return id;
        }

    Pupil*Class::FindPupil( int ID)
        {
            for(int j = pupils.size()-1;j>=0;j--)
            {
                if(pupils.at(j)->GetID()==ID)
                {

                    return pupils.at(j);
                }
            }
            return nullptr;
        }
    Pupil* Class::FindPupil( string name)
    {
        for(int j = pupils.size()-1;j>=0;j--)
        {
            if(pupils.at(j)->GetName()==name)
            {
                return pupils.at(j);
            }
        }
        return nullptr;
    }
    Pupil* Class::AddPupil( int ID,string name)
    {
        Pupil * tmp = new Pupil(ID,name);
        pupils.push_back(tmp);

        return tmp;

    }

