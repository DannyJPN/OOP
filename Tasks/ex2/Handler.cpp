#include "Handler.hpp"
#include <iostream>

using namespace std;



Handler::Handler(unsigned int id,bool (*can)(Facture*fact),double (*han)(Facture*fact))
{
    ID=id;
    CanHandle=can;
    next=prev=nullptr;
    Handle=han;
}




    double Handler::Process(Facture* f)
    {


         if(this->CanHandle(f))
         {
             cout<<"Handler "<<this->ID<<" handled the facture."<<endl;
         return Handle(f);

         }

        if(this->next!=nullptr)
             {
                cout<<"Handler "<<this->ID<<" failed to handle the facture. Trying handler "<<this->next->ID<<endl;

                return next->Process(f);
             }
        else
            {
            cout<<"Handler "<<this->ID<<" failed to handle the facture. Facture non-handlable."<<endl;
            return -1;


            }


    }
    bool Handler::Remove(int ID)
    {
        if(this->ID==ID)
        {
            delete this;
            return true;
        }

        if(this->next!=nullptr)
        {
            return this->next->Remove(ID);
        }
        return false;
    }
