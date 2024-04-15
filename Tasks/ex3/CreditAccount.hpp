#ifndef CREDITACCOUNT
#define CREDITACCOUNT
#include "Client.hpp"
#include "Account.hpp"
class CreditAccount:public Account
{
private:
     double credit;


    public:

    CreditAccount(int num,Client*cl,double cr);
    CreditAccount(int num,Client*cl,double cr,double rate);


    bool Extract(double amount);



};











#endif // CreditACCOUNT

