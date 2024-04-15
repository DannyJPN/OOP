#include "Account.hpp"
unsigned int Account::counter=0;

    Account::Account(int num,Client*cl):Account(num,cl,0)
    {

    cout<<"A const"<<endl;

    }
    Account::Account(int num,Client*cl,double rate)
    {

    cout<<"A const rate"<<endl;
        number=num;
        interest=rate;
        owner=cl;
        //cout<<"Owner: "<<owner<<endl;
        counter++;
    }

    Account::~Account()
    {
        cout<<"Account "<<number<<" deleted"<<endl;
        counter--;
    }
    int Account::GetNumber()
    {
        return number;
    }
    double Account::GetMoney()
    {
        return money;
    }
    double Account::GetInterest()
    {
        return interest;
    }
    Client*Account::GetOwner()
    {

        return owner;
    }


    void Account::Insert(double amount)
    {
        money+=amount;
    }
    bool Account::Extract(double amount)
    {

        cout<<"A extract"<<endl;
        if(amount>=money)
        {
            return false;
        }
        money-=amount;
        return true;
    }
    void Account::Increase()
    {
        money*=(1+interest/100);
    }

