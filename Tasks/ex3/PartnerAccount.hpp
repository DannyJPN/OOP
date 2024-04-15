#ifndef PARTNERACCOUNT
#define PARTNERACCOUNT
#include "Client.hpp"
#include "Account.hpp"
class PartnerAccount:public Account
{
private:
     Client*partner;


    public:

    PartnerAccount(int num,Client*cl,Client*p);
    PartnerAccount(int num,Client*cl,Client*p,double rate);


    Client*GetPartner();



};











#endif // PARTNERACCOUNT

