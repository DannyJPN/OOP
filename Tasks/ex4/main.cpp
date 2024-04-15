#include <iostream>
#include "School.hpp"
using namespace std;

int main()
{


School* s = new School(35,0);
for(int i =0x1A;i<0xAA;i+=0x10)
{
    s->AddClass(i);
    s->AddClass(i+1);
    s->AddClass(i+2);
s->AddClass(i+3,"Blind");
}

for(int i =0;i<s->classes.size();i++)
{
    cout<<hex<<s->classes[i]->GetID()<<endl;
}





delete s;
    return 0;
}
