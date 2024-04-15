#include "PartnerAccount.hpp"


PartnerAccount::PartnerAccount(int num,Client*cl,Client*p):Account(num,cl)
{
    cout<<"PA const"<<endl;
    partner = p;
}

PartnerAccount::PartnerAccount(int num,Client*cl,Client*p,double intrate):Account(num,cl,intrate)
{
    cout<<"PA const rate"<<endl;
    partner = p;
}
