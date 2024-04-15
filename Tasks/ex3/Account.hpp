#ifndef ACCOUNT
#define ACCOUNT
#include "Client.hpp"
#include "AbstractAccount.hpp"

class Account : public AbstractAccount
{
private:
     int number;
    double interest;

    Client*owner;
protected :
    double money=0;


    public:
static unsigned int counter;
    Account(int num,Client*cl);
    Account(int num,Client*cl,double rate);
    ~Account();

    int GetNumber();
    double GetMoney();
    double GetInterest();
    Client*GetOwner();


    void Insert(double amount);
    bool Extract(double amount);
    void Increase();

};











#endif // ACCOUNT
